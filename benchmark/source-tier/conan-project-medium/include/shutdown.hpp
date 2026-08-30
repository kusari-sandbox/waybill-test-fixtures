// shutdown.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_SHUTDOWN_HPP
#define WAYBILL_FIXTURE_CONAN_SHUTDOWN_HPP

#include <string>

namespace waybill_fixture_conan {

struct shutdown_config_t {
    std::string name;
    int flags = 0;
};

struct shutdown_result_t {
    int status;
    std::string tag;
    int version;
};

shutdown_result_t shutdown_init(const shutdown_config_t& cfg);
int shutdown_shutdown();

}  // namespace waybill_fixture_conan

#endif
