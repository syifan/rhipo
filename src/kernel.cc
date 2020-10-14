#include <hip/hip_runtime.h>
#include <hip/hip_runtime_api.h>
#include <iostream>
#include <string>
#include <vector>

#include "src/base64.h"
#include "src/client.h"
#include "src/internal.h"

struct Flags {
  Flags() : flag(0) {}

  uint32_t Get() { return flag; }
  void EnablePrivateSegmentBuffer() { flag |= 1 << 0; }
  void EnableDispatchPtr() { flag |= 1 << 1; }
  void EnableKernargSegmentPtr() { flag |= 1 << 3; }

  void EnableWorkGroupIDX() { flag |= 1 << 7; }
  void EnableWorkGroupIDY() { flag |= 1 << 8; }
  void EnableWorkGroupIDZ() { flag |= 1 << 9; }
  void EnableWorkItemIDY() { flag |= 1 << 11; }
  void EnableWorkItemIDZ() { flag |= 2 << 11; }

 private:
  uint32_t flag;
};

struct HSACodeObjectHeader NoteToHeader(CodeObject* co) {
  struct HSACodeObjectHeader header;

  auto kernel_note = co->note["amdhsa.kernels"][0];

  header.kernel_code_entry_byte_offset = 256;
  header.wi_private_segment_byte_size =
      kernel_note[".private_segment_fixed_size"].get<uint32_t>();
  header.wg_group_segment_byte_size =
      kernel_note[".group_segment_fixed_size"].get<uint32_t>();
  header.kernarg_segment_byte_size =
      kernel_note[".kernarg_segment_size"].get<uint64_t>();
  header.kernarg_segment_alignment =
      kernel_note[".kernarg_segment_align"].get<uint8_t>();
  header.wg_sgpr_count = kernel_note[".sgpr_count"].get<uint16_t>();
  header.wi_vgpr_count = kernel_note[".vgpr_count"].get<uint16_t>();
  header.wavefront_size = kernel_note[".wavefront_size"].get<uint8_t>();

  auto computePgmRsc2 = Flags();
  computePgmRsc2.EnableWorkGroupIDX();
  computePgmRsc2.EnableWorkGroupIDY();
  computePgmRsc2.EnableWorkGroupIDZ();
  header.compute_pgm_rsrc_2 = computePgmRsc2.Get();

  auto flags = Flags();
  flags.EnablePrivateSegmentBuffer();
  flags.EnableDispatchPtr();
  flags.EnableKernargSegmentPtr();
  header.flags = flags.Get();

  return header;
}

std::string EncodeCo(const void* func_addr) {
  auto& co = Client::instance.function_map[func_addr];

  NoteToHeader(co.get());

  std::vector<char> code_object(256 + co->size);
  auto header = NoteToHeader(co.get());

  memcpy(code_object.data(), &header, sizeof(header));
  memcpy(code_object.data() + sizeof(header), co->ptr, co->size);

  auto encoded_co =
      base64_encode(std::string{code_object.data(), code_object.size()});

  return encoded_co;
}

std::string EncodeArgs(const void* func_addr, void** args) {
  auto& co = Client::instance.function_map[func_addr];
  auto kernel_note = co->note["amdhsa.kernels"][0];
  auto arg_segment_size = kernel_note[".kernarg_segment_size"].get<uint64_t>();

  std::vector<char> arg_segment(arg_segment_size);

  int ptr = 0;
  for (int i = 0; i < kernel_note["args"].size(); i++) {
    auto arg_note = kernel_note["args"][i];

    int size = arg_note["size"].get<int>();
    memcpy(arg_segment.data() + ptr, args[i], size);
    ptr += size;
  }

  auto encoded_args =
      base64_encode(std::string{arg_segment.data(), arg_segment.size()});

  return encoded_args;
}

nlohmann::json Dim3ToJson(dim3 d) {
  auto json = nlohmann::json::object();
  json["x"] = d.x;
  json["y"] = d.y;
  json["z"] = d.z;

  return json;
}

hipError_t hipLaunchKernel(const void* func_addr, dim3 numBlocks,
                           dim3 dimBlocks, void** args, size_t sharedMemBytes,
                           hipStream_t stream) {
  printf("%s\n", __PRETTY_FUNCTION__);

  nlohmann::json params = nlohmann::json::object();
  params["code_object"] = EncodeCo(func_addr);
  params["args"] = EncodeArgs(func_addr, args);
  params["num_blocks"] = Dim3ToJson(numBlocks);
  params["dim_blocks"] = Dim3ToJson(dimBlocks);
  params["shared_mem_bytes"] = sharedMemBytes;

  Client::instance.Curl.Post("/launch_kernel", params);

  return hipSuccess;
}
