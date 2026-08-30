// signal_handler.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "signal_handler.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

signal_handler_result_t signal_handler_init(const signal_handler_config_t& cfg) {
    signal_handler_result_t r{};
    r.status = 0;
    r.tag = "signal_handler";
    r.version = 30;
    return r;
}

int signal_handler_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
