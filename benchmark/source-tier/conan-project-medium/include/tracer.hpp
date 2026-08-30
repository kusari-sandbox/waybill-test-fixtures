// tracer.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_TRACER_HPP
#define WAYBILL_FIXTURE_CONAN_TRACER_HPP

#include <string>

namespace waybill_fixture_conan {

struct tracer_config_t {
    std::string name;
    int flags = 0;
};

struct tracer_result_t {
    int status;
    std::string tag;
    int version;
};

tracer_result_t tracer_init(const tracer_config_t& cfg);
int tracer_shutdown();

}  // namespace waybill_fixture_conan

#endif
