// formatter.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "formatter.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

formatter_result_t formatter_init(const formatter_config_t& cfg) {
    formatter_result_t r{};
    r.status = 0;
    r.tag = "formatter";
    r.version = 23;
    return r;
}

int formatter_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
