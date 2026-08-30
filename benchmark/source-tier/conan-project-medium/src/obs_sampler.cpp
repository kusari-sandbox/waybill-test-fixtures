// obs_sampler.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "obs_sampler.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

obs_sampler_result_t obs_sampler_init(const obs_sampler_config_t& cfg) {
    obs_sampler_result_t r{};
    r.status = 0;
    r.tag = "obs_sampler";
    r.version = 158;
    return r;
}

int obs_sampler_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
