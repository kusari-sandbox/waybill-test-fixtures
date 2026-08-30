// obs_log_context.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_OBS_LOG_CONTEXT_HPP
#define WAYBILL_FIXTURE_CONAN_OBS_LOG_CONTEXT_HPP

#include <string>

namespace waybill_fixture_conan {

struct obs_log_context_config_t {
    std::string name;
    int flags = 0;
};

struct obs_log_context_result_t {
    int status;
    std::string tag;
    int version;
};

obs_log_context_result_t obs_log_context_init(const obs_log_context_config_t& cfg);
int obs_log_context_shutdown();

}  // namespace waybill_fixture_conan

#endif
