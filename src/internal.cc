#include <hip/hip_runtime.h>
#include <hip/hip_runtime_api.h>
#include <atomic>
#include <fstream>
#include <vector>

#include "src/internal.h"
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

      std::string image{reinterpret_cast<const char*>(
                            reinterpret_cast<uintptr_t>(header) + desc->offset),
                        desc->size};
      __hipDumpCodeObject(image);

      modules->at(device_id - 1) = module;
    }
  }

  return modules;
}

extern "C" void __hipRegisterFunction(
    std::vector<hipModule_t>* modules, const void* hostFunction,
    char* deviceFunction, const char* deviceName, unsigned int threadLimit,
    uint3* tid, uint3* bid, dim3* blockDim, dim3* gridDim, int* wSize) {
  printf("%s\n", __PRETTY_FUNCTION__);
}

extern "C" hipError_t __hipPushCallConfiguration(dim3 gridDim, dim3 blockDim,
                                                 size_t sharedMem,
                                                 hipStream_t stream) {
  printf("%s\n", __PRETTY_FUNCTION__);
  return hipSuccess;
}

extern "C" hipError_t __hipPopCallConfiguration(dim3* gridDim, dim3* blockDim,
                                                size_t* sharedMem,
                                                hipStream_t* stream) {
  printf("%s\n", __PRETTY_FUNCTION__);
  return hipSuccess;
}
