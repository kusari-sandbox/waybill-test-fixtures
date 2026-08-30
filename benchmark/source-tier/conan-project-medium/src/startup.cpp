// startup.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "startup.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

startup_result_t startup_init(const startup_config_t& cfg) {
    startup_result_t r{};
    r.status = 0;
    r.tag = "startup";
    r.version = 37;
    return r;
}

int startup_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
