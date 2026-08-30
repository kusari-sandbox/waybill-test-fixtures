// util_base64.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_UTIL_BASE64_HPP
#define WAYBILL_FIXTURE_CONAN_UTIL_BASE64_HPP

#include <string>

namespace waybill_fixture_conan {

struct util_base64_config_t {
    std::string name;
    int flags = 0;
};

struct util_base64_result_t {
    int status;
    std::string tag;
    int version;
};

util_base64_result_t util_base64_init(const util_base64_config_t& cfg);
int util_base64_shutdown();

}  // namespace waybill_fixture_conan

#endif
