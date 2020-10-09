#include <hip/hip_runtime.h>
#include <hip/hip_runtime_api.h>
#include <vector>

#include "src/internal.h"

extern "C" std::vector<hipModule_t>* __hipRegisterFatBinary(const void* data) {
  printf("%s\n", __PRETTY_FUNCTION__);
  printf("%p\n", data);
  printf("%s\n", data);

  return nullptr;
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