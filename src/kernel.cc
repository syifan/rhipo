#include <hip/hip_runtime.h>
#include <hip/hip_runtime_api.h>

#include "src/client.h"

hipError_t hipLaunchKernel(const void* func_addr, dim3 numBlocks,
                           dim3 dimBlocks, void** args, size_t sharedMemBytes,
                           hipStream_t stream) {
  printf("%s\n", __PRETTY_FUNCTION__);

  auto co = std::move(Client::instance.function_map[func_addr]);

  return hipSuccess;
}
