#include <hip/hip_runtime.h>

hipError_t hipGetDeviceProperties(hipDeviceProp_t* props, int device) {
  printf("%s\n", __PRETTY_FUNCTION__);
  return hipSuccess;
}