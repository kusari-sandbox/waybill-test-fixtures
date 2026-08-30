// obs_baggage.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_OBS_BAGGAGE_HPP
#define WAYBILL_FIXTURE_CONAN_OBS_BAGGAGE_HPP

#include <string>

namespace waybill_fixture_conan {

struct obs_baggage_config_t {
    std::string name;
    int flags = 0;
};

struct obs_baggage_result_t {
    int status;
    std::string tag;
    int version;
};

obs_baggage_result_t obs_baggage_init(const obs_baggage_config_t& cfg);
int obs_baggage_shutdown();

}  // namespace waybill_fixture_conan

#endif
