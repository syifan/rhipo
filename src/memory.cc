#include <hip/hip_runtime.h>
#include <src/client.h>
#include <nlohmann/json.hpp>

#include "src/base64.h"
#include "src/util.h"

hipError_t hipMalloc(void** ptr, size_t sizeBytes) {
  nlohmann::json param = nlohmann::json::object();
  param["size"] = sizeBytes;

  auto rsp = Client::instance.Curl.Get("/malloc", param);

  *ptr = reinterpret_cast<void*>(rsp["ptr"].get<uintptr_t>());

  printf("malloc ptr: %p\n", *ptr);

  return hipSuccess;
}

hipError_t memcopyH2D(void* dst, const void* src, size_t sizeBytes) {
  auto b64_data = base64_encode(reinterpret_cast<const unsigned char*>(src),
                                sizeBytes, false);

  nlohmann::json param = nlohmann::json::object();
  param["ptr"] = reinterpret_cast<uintptr_t>(dst);
  param["data"] = b64_data;

  auto rsp = Client::instance.Curl.Post("/memcopy_h2d", param);

  return hipSuccess;
}

hipError_t memcopyD2H(void* dst, const void* src, size_t sizeBytes) {
  nlohmann::json param = nlohmann::json::object();
  param["ptr"] = reinterpret_cast<uintptr_t>(src);
  param["size"] = sizeBytes;

  auto rsp = Client::instance.Curl.Get("/memcopy_d2h", param);

  auto b64_data = rsp["data"].get<std::string>();
  auto raw_data = base64_decode(b64_data);

  memcpy(dst, raw_data.c_str(), sizeBytes);

  return hipSuccess;
}

hipError_t hipMemcpy(void* dst, const void* src, size_t sizeBytes,
                     hipMemcpyKind kind) {
  switch (kind) {
    case hipMemcpyHostToDevice:
      return memcopyH2D(dst, src, sizeBytes);
    case hipMemcpyDeviceToHost:
      return memcopyD2H(dst, src, sizeBytes);
    default:
      panic("unsupported memory copy kind.");
  }

  return hipSuccess;
}

hipError_t hipFree(void* ptr) {
  nlohmann::json param = nlohmann::json::object();

  std::string url = "/free/" + std::to_string(reinterpret_cast<uintptr_t>(ptr));

  auto rsp = Client::instance.Curl.Get("/free/", param);

  return hipSuccess;
}
