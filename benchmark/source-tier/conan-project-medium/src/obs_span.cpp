// obs_span.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "obs_span.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

obs_span_result_t obs_span_init(const obs_span_config_t& cfg) {
    obs_span_result_t r{};
    r.status = 0;
    r.tag = "obs_span";
    r.version = 150;
    return r;
}

int obs_span_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
