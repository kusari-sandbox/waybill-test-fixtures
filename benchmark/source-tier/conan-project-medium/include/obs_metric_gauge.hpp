// obs_metric_gauge.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_OBS_METRIC_GAUGE_HPP
#define WAYBILL_FIXTURE_CONAN_OBS_METRIC_GAUGE_HPP

#include <string>

namespace waybill_fixture_conan {

struct obs_metric_gauge_config_t {
    std::string name;
    int flags = 0;
};

struct obs_metric_gauge_result_t {
    int status;
    std::string tag;
    int version;
};

obs_metric_gauge_result_t obs_metric_gauge_init(const obs_metric_gauge_config_t& cfg);
int obs_metric_gauge_shutdown();

}  // namespace waybill_fixture_conan

#endif
