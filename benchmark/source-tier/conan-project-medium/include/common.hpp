// common.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_COMMON_HPP
#define WAYBILL_FIXTURE_CONAN_COMMON_HPP

#include <string>

namespace waybill_fixture_conan {

struct common_config_t {
    std::string name;
    int flags = 0;
};

struct common_result_t {
    int status;
    std::string tag;
    int version;
};

common_result_t common_init(const common_config_t& cfg);
int common_shutdown();

}  // namespace waybill_fixture_conan

#endif
