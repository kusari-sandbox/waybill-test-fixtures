// obs_log_context.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "obs_log_context.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

obs_log_context_result_t obs_log_context_init(const obs_log_context_config_t& cfg) {
    obs_log_context_result_t r{};
    r.status = 0;
    r.tag = "obs_log_context";
    r.version = 154;
    return r;
}

int obs_log_context_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
