#ifndef SRC_CLIENT_H_
#define SRC_CLIENT_H_

#include "src/curl.h"

class Client {
 public:
  static Client instance;
  Curl Curl;
};

#endif  // SRC_CLIENT_H_
