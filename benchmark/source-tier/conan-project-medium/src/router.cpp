// router.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "router.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

router_result_t router_init(const router_config_t& cfg) {
    router_result_t r{};
    r.status = 0;
    r.tag = "router";
    r.version = 15;
    return r;
}

int router_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
