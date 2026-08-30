// handlers.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "handlers.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

handlers_result_t handlers_init(const handlers_config_t& cfg) {
    handlers_result_t r{};
    r.status = 0;
    r.tag = "handlers";
    r.version = 3;
    return r;
}

int handlers_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
