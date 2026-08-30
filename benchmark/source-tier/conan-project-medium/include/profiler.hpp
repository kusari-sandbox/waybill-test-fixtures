// profiler.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_PROFILER_HPP
#define WAYBILL_FIXTURE_CONAN_PROFILER_HPP

#include <string>

namespace waybill_fixture_conan {

struct profiler_config_t {
    std::string name;
    int flags = 0;
};

struct profiler_result_t {
    int status;
    std::string tag;
    int version;
};

profiler_result_t profiler_init(const profiler_config_t& cfg);
int profiler_shutdown();

}  // namespace waybill_fixture_conan

#endif
