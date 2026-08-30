// util_hex.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "util_hex.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

util_hex_result_t util_hex_init(const util_hex_config_t& cfg) {
    util_hex_result_t r{};
    r.status = 0;
    r.tag = "util_hex";
    r.version = 135;
    return r;
}

int util_hex_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
