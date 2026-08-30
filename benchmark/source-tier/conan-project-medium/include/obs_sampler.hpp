// obs_sampler.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_OBS_SAMPLER_HPP
#define WAYBILL_FIXTURE_CONAN_OBS_SAMPLER_HPP

#include <string>

namespace waybill_fixture_conan {

struct obs_sampler_config_t {
    std::string name;
    int flags = 0;
};

struct obs_sampler_result_t {
    int status;
    std::string tag;
    int version;
};

obs_sampler_result_t obs_sampler_init(const obs_sampler_config_t& cfg);
int obs_sampler_shutdown();

}  // namespace waybill_fixture_conan

#endif
