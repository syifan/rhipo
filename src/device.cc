#include <hip/hip_runtime.h>
#include <iostream>

#include "src/client.h"

hipError_t hipGetDeviceCount(int* count) {
  printf("%s\n", __PRETTY_FUNCTION__);

  nlohmann::json param;
  auto rsp = Client::instance.Curl.Get("/device_count/", param);

  *count = rsp["device_count"];

  std::cout << "response: " << rsp << std::endl;

  return hipSuccess;
}

hipError_t hipGetDeviceProperties(hipDeviceProp_t* props, int device) {
  printf("%s\n", __PRETTY_FUNCTION__);
  return hipSuccess;
}
