// util_time.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_UTIL_TIME_HPP
#define WAYBILL_FIXTURE_CONAN_UTIL_TIME_HPP

#include <string>

namespace waybill_fixture_conan {

struct util_time_config_t {
    std::string name;
    int flags = 0;
};

struct util_time_result_t {
    int status;
    std::string tag;
    int version;
};

util_time_result_t util_time_init(const util_time_config_t& cfg);
int util_time_shutdown();

}  // namespace waybill_fixture_conan

#endif
