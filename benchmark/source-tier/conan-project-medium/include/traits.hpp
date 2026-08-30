// traits.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_TRAITS_HPP
#define WAYBILL_FIXTURE_CONAN_TRAITS_HPP

#include <string>

namespace waybill_fixture_conan {

struct traits_config_t {
    std::string name;
    int flags = 0;
};

struct traits_result_t {
    int status;
    std::string tag;
    int version;
};

traits_result_t traits_init(const traits_config_t& cfg);
int traits_shutdown();

}  // namespace waybill_fixture_conan

#endif
