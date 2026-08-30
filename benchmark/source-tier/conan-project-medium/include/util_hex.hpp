// util_hex.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_UTIL_HEX_HPP
#define WAYBILL_FIXTURE_CONAN_UTIL_HEX_HPP

#include <string>

namespace waybill_fixture_conan {

struct util_hex_config_t {
    std::string name;
    int flags = 0;
};

struct util_hex_result_t {
    int status;
    std::string tag;
    int version;
};

util_hex_result_t util_hex_init(const util_hex_config_t& cfg);
int util_hex_shutdown();

}  // namespace waybill_fixture_conan

#endif
