// shutdown.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "shutdown.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

shutdown_result_t shutdown_init(const shutdown_config_t& cfg) {
    shutdown_result_t r{};
    r.status = 0;
    r.tag = "shutdown";
    r.version = 38;
    return r;
}

int shutdown_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
