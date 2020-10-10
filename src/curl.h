#ifndef SRC_CURL_H_
#define SRC_CURL_H_

#include <curl/curl.h>

#include <string>

#include <nlohmann/json.hpp>

class Curl {
 public:
  Curl();
  ~Curl();

  nlohmann::json Get(const std::string& url, const nlohmann::json& params);
  nlohmann::json Post(const std::string& url, const nlohmann::json& params);

 private:
  CURL* curl;
  std::string url;
};

#endif  // SRC_CURL_H_
