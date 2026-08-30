// healthcheck.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_HEALTHCHECK_HPP
#define WAYBILL_FIXTURE_CONAN_HEALTHCHECK_HPP

#include <string>

namespace waybill_fixture_conan {

struct healthcheck_config_t {
    std::string name;
    int flags = 0;
};

struct healthcheck_result_t {
    int status;
    std::string tag;
    int version;
};

healthcheck_result_t healthcheck_init(const healthcheck_config_t& cfg);
int healthcheck_shutdown();

}  // namespace waybill_fixture_conan

#endif
