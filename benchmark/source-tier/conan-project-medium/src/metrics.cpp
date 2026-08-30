// metrics.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "metrics.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

metrics_result_t metrics_init(const metrics_config_t& cfg) {
    metrics_result_t r{};
    r.status = 0;
    r.tag = "metrics";
    r.version = 31;
    return r;
}

int metrics_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
