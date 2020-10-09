#ifndef SRC_CURL_H_
#define SRC_CURL_H_

#include <curl/curl.h>
#include <string>

class Curl {
 public:
  Curl();
  ~Curl();

  Get(const std::string& url);

 private:
  CURL* curl;
  const char* url;
};

#endif  // SRC_CURL_H_
