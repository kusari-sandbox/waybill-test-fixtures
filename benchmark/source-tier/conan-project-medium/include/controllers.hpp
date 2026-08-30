// controllers.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_CONTROLLERS_HPP
#define WAYBILL_FIXTURE_CONAN_CONTROLLERS_HPP

#include <string>

namespace waybill_fixture_conan {

struct controllers_config_t {
    std::string name;
    int flags = 0;
};

struct controllers_result_t {
    int status;
    std::string tag;
    int version;
};

controllers_result_t controllers_init(const controllers_config_t& cfg);
int controllers_shutdown();

}  // namespace waybill_fixture_conan

#endif
