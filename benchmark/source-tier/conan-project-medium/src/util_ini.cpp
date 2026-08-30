// util_ini.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "util_ini.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

util_ini_result_t util_ini_init(const util_ini_config_t& cfg) {
    util_ini_result_t r{};
    r.status = 0;
    r.tag = "util_ini";
    r.version = 138;
    return r;
}

int util_ini_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
