// constants.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_CONSTANTS_HPP
#define WAYBILL_FIXTURE_CONAN_CONSTANTS_HPP

#include <string>

namespace waybill_fixture_conan {

struct constants_config_t {
    std::string name;
    int flags = 0;
};

struct constants_result_t {
    int status;
    std::string tag;
    int version;
};

constants_result_t constants_init(const constants_config_t& cfg);
int constants_shutdown();

}  // namespace waybill_fixture_conan

#endif
