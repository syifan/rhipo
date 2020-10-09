#include "src/curl.h"

#include <cstdlib>

#include "src/util.h"

Curl::Curl() {
  this->curl = curl_easy_init();

  this.url = std::getenv("RHIPO_SERVER_URL");
  if (!url) {
    panic("environment variable RHIPO_SERVER_URL is not set");
  }
}

Curl::~Curl() { curl_easy_cleanup(this->curl); }
