#include "src/curl.h"

#include <cstdlib>

#include "src/util.h"

Curl::Curl() {
  this->curl = curl_easy_init();

  auto url = std::getenv("RHIPO_SERVER_URL");
  if (!url) {
    panic("environment variable RHIPO_SERVER_URL is not set");
  }

  this->url = url;
}

Curl::~Curl() { curl_easy_cleanup(this->curl); }

size_t writefunc(void *ptr, size_t size, size_t nmemb, std::string *s) {
  s->append(static_cast<char *>(ptr), size * nmemb);
  return size * nmemb;
}

nlohmann::json Curl::Get(const std::string &url, const nlohmann::json &params) {
  std::string rsp;

  auto data_str = params.dump();
  auto full_url = this->url + url + "?data=" + data_str;

  printf("\nGET %s\n", full_url.c_str());

  curl_easy_setopt(this->curl, CURLOPT_URL, full_url.c_str());
  curl_easy_setopt(this->curl, CURLOPT_POSTFIELDS, NULL);
  curl_easy_setopt(this->curl, CURLOPT_HTTPGET, 1L);
  curl_easy_setopt(this->curl, CURLOPT_WRITEFUNCTION, writefunc);
  curl_easy_setopt(this->curl, CURLOPT_WRITEDATA, &rsp);

  curl_easy_perform(this->curl);

  printf("\t%s\n\n", rsp.c_str());

  return nlohmann::json::parse(rsp);
}

nlohmann::json Curl::Post(const std::string &url,
                          const nlohmann::json &params) {
  std::string rsp;

  auto data_str = params.dump();
  auto full_url = this->url + url;

  printf("\nPOST %s\n", full_url.c_str());

  curl_easy_setopt(this->curl, CURLOPT_URL, full_url.c_str());
  curl_easy_setopt(this->curl, CURLOPT_POSTFIELDS, data_str.c_str());
  curl_easy_setopt(this->curl, CURLOPT_WRITEFUNCTION, writefunc);
  curl_easy_setopt(this->curl, CURLOPT_WRITEDATA, &rsp);

  curl_easy_perform(this->curl);

  // printf("\tbody: %s\n", data_str.c_str());
  printf("\t%s\n\n", rsp.c_str());

  return nlohmann::json::parse(rsp);
}
