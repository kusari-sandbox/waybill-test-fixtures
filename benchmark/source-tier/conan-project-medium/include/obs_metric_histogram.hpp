// obs_metric_histogram.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_OBS_METRIC_HISTOGRAM_HPP
#define WAYBILL_FIXTURE_CONAN_OBS_METRIC_HISTOGRAM_HPP

#include <string>

namespace waybill_fixture_conan {

struct obs_metric_histogram_config_t {
    std::string name;
    int flags = 0;
};

struct obs_metric_histogram_result_t {
    int status;
    std::string tag;
    int version;
};

obs_metric_histogram_result_t obs_metric_histogram_init(const obs_metric_histogram_config_t& cfg);
int obs_metric_histogram_shutdown();

}  // namespace waybill_fixture_conan

#endif
