#ifndef SRC_CLIENT_H_
#define SRC_CLIENT_H_

#include <hip/hip_runtime_api.h>
#include <memory>
#include <unordered_map>

#include "src/curl.h"
#include "src/internal.h"

struct CallConfiguration {
  dim3 gridDim;
  dim3 blockDim;
  size_t sharedMem;
  hipStream_t stream;
};

class Client {
 public:
  static Client instance;
  Curl curl;

  std::unordered_map<const void*, std::unique_ptr<struct CodeObject>>
      function_map;
  struct CallConfiguration config;
};

#endif  // SRC_CLIENT_H_
