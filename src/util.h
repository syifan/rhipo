#ifndef SRC_UTIL_H_
#define SRC_UTIL_H_

#include <iostream>
#include <string>

void panic(const std::string &msg) {
  std::cerr << msg << std::endl;
  exit(1);
}

#endif  // SRC_UTIL_H_
