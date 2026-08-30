// middleware.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "middleware.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

middleware_result_t middleware_init(const middleware_config_t& cfg) {
    middleware_result_t r{};
    r.status = 0;
    r.tag = "middleware";
    r.version = 14;
    return r;
}

int middleware_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
