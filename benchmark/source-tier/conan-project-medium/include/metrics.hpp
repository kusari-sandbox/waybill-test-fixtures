// metrics.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_METRICS_HPP
#define WAYBILL_FIXTURE_CONAN_METRICS_HPP

#include <string>

namespace waybill_fixture_conan {

struct metrics_config_t {
    std::string name;
    int flags = 0;
};

struct metrics_result_t {
    int status;
    std::string tag;
    int version;
};

metrics_result_t metrics_init(const metrics_config_t& cfg);
int metrics_shutdown();

}  // namespace waybill_fixture_conan

#endif
