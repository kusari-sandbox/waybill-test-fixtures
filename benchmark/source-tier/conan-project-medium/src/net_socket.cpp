// net_socket.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "net_socket.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

net_socket_result_t net_socket_init(const net_socket_config_t& cfg) {
    net_socket_result_t r{};
    r.status = 0;
    r.tag = "net_socket";
    r.version = 107;
    return r;
}

int net_socket_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
