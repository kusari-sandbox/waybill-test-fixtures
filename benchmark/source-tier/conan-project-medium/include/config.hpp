// config.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_CONFIG_HPP
#define WAYBILL_FIXTURE_CONAN_CONFIG_HPP

#include <string>

namespace waybill_fixture_conan {

struct config_config_t {
    std::string name;
    int flags = 0;
};

struct config_result_t {
    int status;
    std::string tag;
    int version;
};

config_result_t config_init(const config_config_t& cfg);
int config_shutdown();

}  // namespace waybill_fixture_conan

#endif
