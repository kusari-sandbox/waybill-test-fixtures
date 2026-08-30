// diagnostics.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_DIAGNOSTICS_HPP
#define WAYBILL_FIXTURE_CONAN_DIAGNOSTICS_HPP

#include <string>

namespace waybill_fixture_conan {

struct diagnostics_config_t {
    std::string name;
    int flags = 0;
};

struct diagnostics_result_t {
    int status;
    std::string tag;
    int version;
};

diagnostics_result_t diagnostics_init(const diagnostics_config_t& cfg);
int diagnostics_shutdown();

}  // namespace waybill_fixture_conan

#endif
