#ifndef SRC_INTERNAL_H_
#define SRC_INTERNAL_H_

#include <hsa/hsa.h>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>

#include "nlohmann/json.hpp"

// hip-clang fatbin format
constexpr unsigned __hipFatMAGIC2 = 0x48495046;  // "HIPF"

#define CLANG_OFFLOAD_BUNDLER_MAGIC "__CLANG_OFFLOAD_BUNDLE__"
#define AMDGCN_AMDHSA_TRIPLE "hip-amdgcn-amd-amdhsa"

struct __ClangOffloadBundleDesc {
  uint64_t offset;
  uint64_t size;
  uint64_t tripleSize;
  const char triple[1];

  const struct __ClangOffloadBundleDesc* next() const {
    return reinterpret_cast<const struct __ClangOffloadBundleDesc*>(triple +
                                                                    tripleSize);
  }
};

struct __ClangOffloadBundleHeader {
  const char magic[sizeof(CLANG_OFFLOAD_BUNDLER_MAGIC) - 1];
  uint64_t numBundles;
  __ClangOffloadBundleDesc desc[1];
};

struct __CudaFatBinaryWrapper {
  unsigned int magic;
  unsigned int version;
  __ClangOffloadBundleHeader* binary;
  void* unused;
};

struct HSACodeObjectHeader {
  uint32_t code_version_major;
  uint32_t code_version_minor;
  uint16_t machine_kind;
  uint16_t machine_version_major;
  uint16_t machine_version_minor;
  uint16_t machine_version_stepping;
  uint64_t kernel_code_entry_byte_offset;
  uint64_t kernel_code_prefetch_byte_offset;
  uint64_t kernel_code_prefetch_byte_size;
  uint64_t max_scratch_backing_memory_byte_size;
  uint32_t compute_pgm_rsrc_1;
  uint32_t compute_pgm_rsrc_2;
  uint32_t flags;
  uint32_t wi_private_segment_byte_size;
  uint32_t wg_group_segment_byte_size;
  uint32_t gds_segment_byte_size;
  uint64_t kernarg_segment_byte_size;
  uint32_t wg_fbarrier_count;
  uint16_t wg_sgpr_count;
  uint16_t wi_vgpr_count;
  uint16_t reserved_vgpr_first;
  uint16_t reserved_vgpr_count;
  uint16_t reserved_sgpr_first;
  uint16_t reserved_sgpr_count;
  uint16_t debug_wf_private_segment_offset_sgpr;
  uint16_t debuf_private_segment_buffer_sgpr;
  uint8_t kernarg_segment_alignment;
  uint8_t group_segment_alignment;
  uint8_t private_segment_alignment;
  uint8_t wavefront_size;
  uint32_t call_convention;
  uint8_t reserved[12];
  uint64_t runtime_loader_kernel_symbol;
  uint8_t control_directive[128];
};

struct CodeObject {
  void* ptr;
  size_t size;
  nlohmann::json note;
};

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
