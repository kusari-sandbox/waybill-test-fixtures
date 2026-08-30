// watchdog.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "watchdog.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

watchdog_result_t watchdog_init(const watchdog_config_t& cfg) {
    watchdog_result_t r{};
    r.status = 0;
    r.tag = "watchdog";
    r.version = 40;
    return r;
}

int watchdog_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
