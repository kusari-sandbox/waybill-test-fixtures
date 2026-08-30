// obs_log_sink.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "obs_log_sink.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

obs_log_sink_result_t obs_log_sink_init(const obs_log_sink_config_t& cfg) {
    obs_log_sink_result_t r{};
    r.status = 0;
    r.tag = "obs_log_sink";
    r.version = 156;
    return r;
}

int obs_log_sink_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
