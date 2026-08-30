// auth.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_AUTH_HPP
#define WAYBILL_FIXTURE_CONAN_AUTH_HPP

#include <string>

namespace waybill_fixture_conan {

struct auth_config_t {
    std::string name;
    int flags = 0;
};

struct auth_result_t {
    int status;
    std::string tag;
    int version;
};

auth_result_t auth_init(const auth_config_t& cfg);
int auth_shutdown();

}  // namespace waybill_fixture_conan

#endif
