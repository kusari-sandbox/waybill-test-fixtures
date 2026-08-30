// compiler_hints.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_COMPILER_HINTS_HPP
#define WAYBILL_FIXTURE_CONAN_COMPILER_HINTS_HPP

#include <string>

namespace waybill_fixture_conan {

struct compiler_hints_config_t {
    std::string name;
    int flags = 0;
};

struct compiler_hints_result_t {
    int status;
    std::string tag;
    int version;
};

compiler_hints_result_t compiler_hints_init(const compiler_hints_config_t& cfg);
int compiler_hints_shutdown();

}  // namespace waybill_fixture_conan

#endif
