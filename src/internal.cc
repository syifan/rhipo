#include "src/internal.h"

#include <elf.h>
#include <hip/hip_runtime.h>
#include <hip/hip_runtime_api.h>
#include <atomic>
#include <fstream>
#include <memory>
#include <vector>

#include "msgpack/msgpack.hpp"
#include "src/client.h"
#include "src/elf.h"
#include "src/util.h"

void __hipDumpCodeObject(const std::string& image) {
  char fname[30];
  static std::atomic<int> index;
  snprintf(fname, sizeof(fname), "__hip_dump_code_object%04d.o", index++);
  std::ofstream ofs;
  ofs.open(fname, std::ios::binary);
  ofs << image;
  ofs.close();
}

extern "C" std::vector<hipModule_t>* __hipRegisterFatBinary(const void* data) {
  hipError_t err;

  const __CudaFatBinaryWrapper* fbwrapper =
      reinterpret_cast<const __CudaFatBinaryWrapper*>(data);
  if (fbwrapper->magic != __hipFatMAGIC2 || fbwrapper->version != 1) {
    return nullptr;
  }

  const __ClangOffloadBundleHeader* header = fbwrapper->binary;
  std::string magic(reinterpret_cast<const char*>(header),
                    sizeof(CLANG_OFFLOAD_BUNDLER_MAGIC) - 1);
  if (magic.compare(CLANG_OFFLOAD_BUNDLER_MAGIC)) {
    return nullptr;
  }

  int device_count = 0;
  err = hipGetDeviceCount(&device_count);
  if (err != hipSuccess) {
    panic("cannot get device count.");
  }

  const __ClangOffloadBundleDesc* desc = &header->desc[0];

  auto modules = new std::vector<hipModule_t>(device_count);
  for (uint64_t i = 0; i < header->numBundles; i++, desc = desc->next()) {
    printf("%lu\n", i);
    printf("%s\n", desc->triple);

    std::string triple{&desc->triple[0], sizeof(AMDGCN_AMDHSA_TRIPLE) - 1};
    if (triple.compare(AMDGCN_AMDHSA_TRIPLE)) {
      continue;
    }

    std::string target{&desc->triple[sizeof(AMDGCN_AMDHSA_TRIPLE)],
                       desc->tripleSize - sizeof(AMDGCN_AMDHSA_TRIPLE)};
    printf("Found bundle for %s\n", target.c_str());

    for (int device_id = 1; device_id <= device_count; device_id++) {
      struct hipDeviceProp_t device_prop;
      err = hipGetDeviceProperties(&device_prop, device_id);
      if (err != hipSuccess) {
        panic("cannot get device properties.");
      }

      ihipModule_t* module = new ihipModule_t;

      auto image_ptr = reinterpret_cast<uintptr_t>(header) + desc->offset;

      std::string image{reinterpret_cast<const char*>(image_ptr), desc->size};
      __hipDumpCodeObject(image);

      module->executable = hsa_executable_t();
      module->executable.handle = reinterpret_cast<uint64_t>(image_ptr);

      modules->at(device_id - 1) = module;
    }
  }

  return modules;
}

void getKernelArgumentMetaData(elfio::File* elf) {
  auto note_section = elf->GetSectionByType("SHT_NOTE");
  if (!note_section) {
    panic("note section is not found");
  }

  char* blog = note_section->Blob();
  int offset = 0;
  while (offset < note_section->size) {
    auto note = std::make_unique<elfio::Note>(elf, blog + offset);
    offset += note->TotalSize();

    if (note->name.rfind("AMDGPU") == 0) {
      auto object_handle =
          msgpack::unpack(note->desc.c_str() + 1, note->desc_size);
      auto obj = object_handle.get();

      std::cout << "Note " << note->name << ": " << obj << std::endl;
    }
  }
}

std::unique_ptr<struct CodeObject> getCodeObject(hipModule_t module,
                                                 char* function_name) {
  char* elf_ptr = reinterpret_cast<char*>(module->executable.handle);
  elfio::File elf_file = elfio::File::FromMem(elf_ptr);

  auto symbol = elf_file.GetSymbolByName(function_name);
  if (!symbol) {
    panic("function not found");
    return nullptr;
  }

  auto co = std::make_unique<struct CodeObject>();
  co->ptr = reinterpret_cast<struct HSACodeObjectHeader*>(symbol->Blob());
  co->size = symbol->size;

  getKernelArgumentMetaData(&elf_file);

  return std::move(co);
}

extern "C" void __hipRegisterFunction(
    std::vector<hipModule_t>* modules, const void* hostFunction,
    char* deviceFunction, const char* deviceName, unsigned int threadLimit,
    uint3* tid, uint3* bid, dim3* blockDim, dim3* gridDim, int* wSize) {
  printf("%s\n", __PRETTY_FUNCTION__);
  auto module = modules->at(0);
  auto co = getCodeObject(module, deviceFunction);
  Client::instance.function_map[hostFunction] = std::move(co);
}

extern "C" void __hipUnregisterFatBinary(
    std::vector<std::pair<hipModule_t, bool> >* modules) {
  printf("%s\n", __PRETTY_FUNCTION__);
}

extern "C" hipError_t __hipPushCallConfiguration(dim3 gridDim, dim3 blockDim,
                                                 size_t sharedMem,
                                                 hipStream_t stream) {
  printf("%s\n", __PRETTY_FUNCTION__);

  Client::instance.config =
      CallConfiguration{gridDim, blockDim, sharedMem, stream};

  return hipSuccess;
}

extern "C" hipError_t __hipPopCallConfiguration(dim3* gridDim, dim3* blockDim,
                                                size_t* sharedMem,
                                                hipStream_t* stream) {
  printf("%s\n", __PRETTY_FUNCTION__);

  auto config = Client::instance.config;
  *gridDim = config.gridDim;
  *blockDim = config.blockDim;
  *sharedMem = config.sharedMem;
  *stream = config.stream;

  return hipSuccess;
}
