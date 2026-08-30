// obs_export_otlp.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "obs_export_otlp.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

obs_export_otlp_result_t obs_export_otlp_init(const obs_export_otlp_config_t& cfg) {
    obs_export_otlp_result_t r{};
    r.status = 0;
    r.tag = "obs_export_otlp";
    r.version = 157;
    return r;
}

int obs_export_otlp_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
