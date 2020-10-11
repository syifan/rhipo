#ifndef SRC_CLIENT_H_
#define SRC_CLIENT_H_

#include <memory>
#include <unordered_map>

#include "src/curl.h"
#include "src/internal.h"

class Client {
 public:
  static Client instance;
  Curl Curl;

  std::unordered_map<const void*, std::unique_ptr<struct CodeObject>>
      function_map;
};

#endif  // SRC_CLIENT_H_
