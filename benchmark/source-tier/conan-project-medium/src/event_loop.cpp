// event_loop.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "event_loop.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

event_loop_result_t event_loop_init(const event_loop_config_t& cfg) {
    event_loop_result_t r{};
    r.status = 0;
    r.tag = "event_loop";
    r.version = 29;
    return r;
}

int event_loop_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
