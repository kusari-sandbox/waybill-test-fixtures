// util_ini.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_UTIL_INI_HPP
#define WAYBILL_FIXTURE_CONAN_UTIL_INI_HPP

#include <string>

namespace waybill_fixture_conan {

struct util_ini_config_t {
    std::string name;
    int flags = 0;
};

struct util_ini_result_t {
    int status;
    std::string tag;
    int version;
};

util_ini_result_t util_ini_init(const util_ini_config_t& cfg);
int util_ini_shutdown();

}  // namespace waybill_fixture_conan

#endif
