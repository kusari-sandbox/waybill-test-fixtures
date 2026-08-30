// util_yaml.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_UTIL_YAML_HPP
#define WAYBILL_FIXTURE_CONAN_UTIL_YAML_HPP

#include <string>

namespace waybill_fixture_conan {

struct util_yaml_config_t {
    std::string name;
    int flags = 0;
};

struct util_yaml_result_t {
    int status;
    std::string tag;
    int version;
};

util_yaml_result_t util_yaml_init(const util_yaml_config_t& cfg);
int util_yaml_shutdown();

}  // namespace waybill_fixture_conan

#endif
