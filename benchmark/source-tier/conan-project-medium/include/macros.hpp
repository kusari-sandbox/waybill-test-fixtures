// macros.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_MACROS_HPP
#define WAYBILL_FIXTURE_CONAN_MACROS_HPP

#include <string>

namespace waybill_fixture_conan {

struct macros_config_t {
    std::string name;
    int flags = 0;
};

struct macros_result_t {
    int status;
    std::string tag;
    int version;
};

macros_result_t macros_init(const macros_config_t& cfg);
int macros_shutdown();

}  // namespace waybill_fixture_conan

#endif
