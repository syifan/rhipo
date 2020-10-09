#include <hip/hip_runtime.h>
#include <hip/hip_runtime_api.h>

hipError_t hipLaunchKernel(const void* func_addr, dim3 numBlocks,
                           dim3 dimBlocks, void** args, size_t sharedMemBytes,
                           hipStream_t stream) {
  printf("%s\n", __PRETTY_FUNCTION__);
  return hipSuccess;
}

hipError_t hipFree(void* ptr) {
  printf("%s\n", __PRETTY_FUNCTION__);
  return hipSuccess;
}
