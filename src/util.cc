#include "src/util.h"

void panic(const std::string &msg) {
  std::cerr << msg << std::endl;
  exit(1);
}
