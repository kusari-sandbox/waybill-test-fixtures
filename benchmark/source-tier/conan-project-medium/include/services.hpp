// services.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_SERVICES_HPP
#define WAYBILL_FIXTURE_CONAN_SERVICES_HPP

#include <string>

namespace waybill_fixture_conan {

struct services_config_t {
    std::string name;
    int flags = 0;
};

struct services_result_t {
    int status;
    std::string tag;
    int version;
};

services_result_t services_init(const services_config_t& cfg);
int services_shutdown();

}  // namespace waybill_fixture_conan

#endif
