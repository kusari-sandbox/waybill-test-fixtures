// scheduler.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "scheduler.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

scheduler_result_t scheduler_init(const scheduler_config_t& cfg) {
    scheduler_result_t r{};
    r.status = 0;
    r.tag = "scheduler";
    r.version = 27;
    return r;
}

int scheduler_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
