// telemetry.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "telemetry.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

telemetry_result_t telemetry_init(const telemetry_config_t& cfg) {
    telemetry_result_t r{};
    r.status = 0;
    r.tag = "telemetry";
    r.version = 32;
    return r;
}

int telemetry_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
