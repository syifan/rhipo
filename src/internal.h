#ifndef SRC_INTERNAL_H_
#define SRC_INTERNAL_H_

#include <hsa/hsa.h>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>

struct ihipModule_t {
  std::string fileName;
  hsa_executable_t executable = {};
  hsa_code_object_reader_t coReader = {};
  std::string hash;
  std::unordered_map<std::string,
                     std::vector<std::pair<std::size_t, std::size_t>>>
      kernargs;

  ~ihipModule_t() {
    if (executable.handle) hsa_executable_destroy(executable);
    if (coReader.handle) hsa_code_object_reader_destroy(coReader);
  }
};

typedef struct ihipModule_t* hipModule_t;

#endif  // SRC_INTERNAL_H_
