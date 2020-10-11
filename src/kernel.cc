#include <hip/hip_runtime.h>
#include <hip/hip_runtime_api.h>
#include <vector>

#include "src/client.h"
#include "src/internal.h"

hipError_t hipLaunchKernel(const void* func_addr, dim3 numBlocks,
                           dim3 dimBlocks, void** args, size_t sharedMemBytes,
                           hipStream_t stream) {
  printf("%s\n", __PRETTY_FUNCTION__);

  auto co = std::move(Client::instance.function_map[func_addr]);
  struct HSACodeObjectHeader* co_header = co->ptr;

  std::vector<char> kernarg_space(co_header->kernarg_segment_byte_size);

  return hipSuccess;
}
