// obs_metric_counter.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_OBS_METRIC_COUNTER_HPP
#define WAYBILL_FIXTURE_CONAN_OBS_METRIC_COUNTER_HPP

#include <string>

namespace waybill_fixture_conan {

struct obs_metric_counter_config_t {
    std::string name;
    int flags = 0;
};

struct obs_metric_counter_result_t {
    int status;
    std::string tag;
    int version;
};

obs_metric_counter_result_t obs_metric_counter_init(const obs_metric_counter_config_t& cfg);
int obs_metric_counter_shutdown();

}  // namespace waybill_fixture_conan

#endif
