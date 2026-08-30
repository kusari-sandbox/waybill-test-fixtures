// types.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_TYPES_HPP
#define WAYBILL_FIXTURE_CONAN_TYPES_HPP

#include <string>

namespace waybill_fixture_conan {

struct types_config_t {
    std::string name;
    int flags = 0;
};

struct types_result_t {
    int status;
    std::string tag;
    int version;
};

types_result_t types_init(const types_config_t& cfg);
int types_shutdown();

}  // namespace waybill_fixture_conan

#endif
