// net_websocket.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "net_websocket.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

net_websocket_result_t net_websocket_init(const net_websocket_config_t& cfg) {
    net_websocket_result_t r{};
    r.status = 0;
    r.tag = "net_websocket";
    r.version = 103;
    return r;
}

int net_websocket_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
