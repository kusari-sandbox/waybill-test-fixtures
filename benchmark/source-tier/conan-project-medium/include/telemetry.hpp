// telemetry.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_TELEMETRY_HPP
#define WAYBILL_FIXTURE_CONAN_TELEMETRY_HPP

#include <string>

namespace waybill_fixture_conan {

struct telemetry_config_t {
    std::string name;
    int flags = 0;
};

struct telemetry_result_t {
    int status;
    std::string tag;
    int version;
};

telemetry_result_t telemetry_init(const telemetry_config_t& cfg);
int telemetry_shutdown();

}  // namespace waybill_fixture_conan

#endif
