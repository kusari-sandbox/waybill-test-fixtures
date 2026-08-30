// util_string.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_UTIL_STRING_HPP
#define WAYBILL_FIXTURE_CONAN_UTIL_STRING_HPP

#include <string>

namespace waybill_fixture_conan {

struct util_string_config_t {
    std::string name;
    int flags = 0;
};

struct util_string_result_t {
    int status;
    std::string tag;
    int version;
};

util_string_result_t util_string_init(const util_string_config_t& cfg);
int util_string_shutdown();

}  // namespace waybill_fixture_conan

#endif
