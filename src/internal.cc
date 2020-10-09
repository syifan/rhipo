#include <vector>

#include "src/internal.h"

extern "C" std::vector<hipModule_t>* __hipRegisterFatBinary(const void* data) {
  printf("%p\n", data);
  return nullptr;
}
