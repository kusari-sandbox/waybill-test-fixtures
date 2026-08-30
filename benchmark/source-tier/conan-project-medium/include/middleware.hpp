// middleware.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_MIDDLEWARE_HPP
#define WAYBILL_FIXTURE_CONAN_MIDDLEWARE_HPP

#include <string>

namespace waybill_fixture_conan {

struct middleware_config_t {
    std::string name;
    int flags = 0;
};

struct middleware_result_t {
    int status;
    std::string tag;
    int version;
};

middleware_result_t middleware_init(const middleware_config_t& cfg);
int middleware_shutdown();

}  // namespace waybill_fixture_conan

#endif
