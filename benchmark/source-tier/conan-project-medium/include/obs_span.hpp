// obs_span.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_OBS_SPAN_HPP
#define WAYBILL_FIXTURE_CONAN_OBS_SPAN_HPP

#include <string>

namespace waybill_fixture_conan {

struct obs_span_config_t {
    std::string name;
    int flags = 0;
};

struct obs_span_result_t {
    int status;
    std::string tag;
    int version;
};

obs_span_result_t obs_span_init(const obs_span_config_t& cfg);
int obs_span_shutdown();

}  // namespace waybill_fixture_conan

#endif
