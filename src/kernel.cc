#include <hip/hip_runtime.h>
#include <hip/hip_runtime_api.h>
#include <iostream>
#include <vector>

#include "src/client.h"
#include "src/internal.h"

struct Flag {
  uint32_t Get() { return flag; }
  void EnablePrivateSegmentBuffer() { flag |= 1 << 31; }
  void EnableDispatchPtr() { flag |= 1 << 30; }
  void EnableKernargSegmentPtr() { flag |= 1 << 28; }
  void EnableWorkGroupCountX() { flag |= 1 << 24; }
  void EnableWorkGroupCountY() { flag |= 1 << 23; }
  void EnableWorkGroupCountZ() { flag |= 1 << 22; }

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

  return header;
}

hipError_t hipLaunchKernel(const void* func_addr, dim3 numBlocks,
                           dim3 dimBlocks, void** args, size_t sharedMemBytes,
                           hipStream_t stream) {
  printf("%s\n", __PRETTY_FUNCTION__);

  auto& co = Client::instance.function_map[func_addr];

  NoteToHeader(co.get());

  std::vector<char*> code_object(256 + co->size);

  // std::vector<char> kernarg_space(co_header->kernarg_segment_byte_size);

  return hipSuccess;
}
