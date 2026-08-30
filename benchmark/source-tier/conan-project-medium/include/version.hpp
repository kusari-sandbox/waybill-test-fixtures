// version.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_VERSION_HPP
#define WAYBILL_FIXTURE_CONAN_VERSION_HPP

#include <string>

namespace waybill_fixture_conan {

struct version_config_t {
    std::string name;
    int flags = 0;
};

struct version_result_t {
    int status;
    std::string tag;
    int version;
};

version_result_t version_init(const version_config_t& cfg);
int version_shutdown();

}  // namespace waybill_fixture_conan

#endif
