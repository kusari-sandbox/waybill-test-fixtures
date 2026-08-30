// util_hash.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_UTIL_HASH_HPP
#define WAYBILL_FIXTURE_CONAN_UTIL_HASH_HPP

#include <string>

namespace waybill_fixture_conan {

struct util_hash_config_t {
    std::string name;
    int flags = 0;
};

struct util_hash_result_t {
    int status;
    std::string tag;
    int version;
};

util_hash_result_t util_hash_init(const util_hash_config_t& cfg);
int util_hash_shutdown();

}  // namespace waybill_fixture_conan

#endif
