#include <hip/hip_runtime.h>

hipError_t hipMalloc(void** ptr, size_t sizeBytes) {
  printf("%s\n", __PRETTY_FUNCTION__);
  return hipSuccess;
}

hipError_t hipMemcpy(void* dst, const void* src, size_t sizeBytes,
                     hipMemcpyKind kind) {
  printf("%s\n", __PRETTY_FUNCTION__);
  return hipSuccess;
}
