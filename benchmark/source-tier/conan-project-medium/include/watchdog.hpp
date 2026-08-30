// watchdog.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_WATCHDOG_HPP
#define WAYBILL_FIXTURE_CONAN_WATCHDOG_HPP

#include <string>

namespace waybill_fixture_conan {

struct watchdog_config_t {
    std::string name;
    int flags = 0;
};

struct watchdog_result_t {
    int status;
    std::string tag;
    int version;
};

watchdog_result_t watchdog_init(const watchdog_config_t& cfg);
int watchdog_shutdown();

}  // namespace waybill_fixture_conan

#endif
