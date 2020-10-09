#include <hip/hip_runtime.h>
#include <iostream>
#include <string>

#include "src/client.h"

hipError_t hipGetDeviceCount(int* count) {
  printf("%s\n", __PRETTY_FUNCTION__);

  nlohmann::json param;
  auto rsp = Client::instance.Curl.Get("/device_count", param);

  *count = rsp["device_count"];

  return hipSuccess;
}

hipError_t hipGetDeviceProperties(hipDeviceProp_t* props, int device) {
  printf("%s\n", __PRETTY_FUNCTION__);

  nlohmann::json param;
  auto rsp = Client::instance.Curl.Get(
      "/device_properties/" + std::to_string(device), param);

  strncpy(props->name, rsp["name"].get<std::string>().c_str(), 256);
  props->major = rsp["major"].get<int>();
  props->minor = rsp["minor"].get<int>();

  return hipSuccess;
}
