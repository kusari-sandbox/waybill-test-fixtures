// controllers.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "controllers.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

controllers_result_t controllers_init(const controllers_config_t& cfg) {
    controllers_result_t r{};
    r.status = 0;
    r.tag = "controllers";
    r.version = 5;
    return r;
}

int controllers_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
