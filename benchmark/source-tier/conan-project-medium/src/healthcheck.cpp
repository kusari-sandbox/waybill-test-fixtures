// healthcheck.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "healthcheck.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

healthcheck_result_t healthcheck_init(const healthcheck_config_t& cfg) {
    healthcheck_result_t r{};
    r.status = 0;
    r.tag = "healthcheck";
    r.version = 36;
    return r;
}

int healthcheck_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
