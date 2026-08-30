// platform.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_PLATFORM_HPP
#define WAYBILL_FIXTURE_CONAN_PLATFORM_HPP

#include <string>

namespace waybill_fixture_conan {

struct platform_config_t {
    std::string name;
    int flags = 0;
};

struct platform_result_t {
    int status;
    std::string tag;
    int version;
};

platform_result_t platform_init(const platform_config_t& cfg);
int platform_shutdown();

}  // namespace waybill_fixture_conan

#endif
