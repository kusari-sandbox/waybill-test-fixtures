// lifecycle.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_LIFECYCLE_HPP
#define WAYBILL_FIXTURE_CONAN_LIFECYCLE_HPP

#include <string>

namespace waybill_fixture_conan {

struct lifecycle_config_t {
    std::string name;
    int flags = 0;
};

struct lifecycle_result_t {
    int status;
    std::string tag;
    int version;
};

lifecycle_result_t lifecycle_init(const lifecycle_config_t& cfg);
int lifecycle_shutdown();

}  // namespace waybill_fixture_conan

#endif
