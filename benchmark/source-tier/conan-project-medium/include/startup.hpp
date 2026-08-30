// startup.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_STARTUP_HPP
#define WAYBILL_FIXTURE_CONAN_STARTUP_HPP

#include <string>

namespace waybill_fixture_conan {

struct startup_config_t {
    std::string name;
    int flags = 0;
};

struct startup_result_t {
    int status;
    std::string tag;
    int version;
};

startup_result_t startup_init(const startup_config_t& cfg);
int startup_shutdown();

}  // namespace waybill_fixture_conan

#endif
