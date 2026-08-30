// session.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_SESSION_HPP
#define WAYBILL_FIXTURE_CONAN_SESSION_HPP

#include <string>

namespace waybill_fixture_conan {

struct session_config_t {
    std::string name;
    int flags = 0;
};

struct session_result_t {
    int status;
    std::string tag;
    int version;
};

session_result_t session_init(const session_config_t& cfg);
int session_shutdown();

}  // namespace waybill_fixture_conan

#endif
