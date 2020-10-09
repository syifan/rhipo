#include <hip/hip_runtime.h>

hipError_t hipGetDeviceCount(int* count) {
  printf("%s\n", __PRETTY_FUNCTION__);
  return hipSuccess;
}

hipError_t hipGetDeviceProperties(hipDeviceProp_t* props, int device) {
  printf("%s\n", __PRETTY_FUNCTION__);
  return hipSuccess;
}
