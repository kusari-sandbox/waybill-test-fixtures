// obs_metric_gauge.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "obs_metric_gauge.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

obs_metric_gauge_result_t obs_metric_gauge_init(const obs_metric_gauge_config_t& cfg) {
    obs_metric_gauge_result_t r{};
    r.status = 0;
    r.tag = "obs_metric_gauge";
    r.version = 152;
    return r;
}

int obs_metric_gauge_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
