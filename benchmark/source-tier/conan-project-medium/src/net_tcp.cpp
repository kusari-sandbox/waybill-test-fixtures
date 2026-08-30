// net_tcp.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "net_tcp.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

net_tcp_result_t net_tcp_init(const net_tcp_config_t& cfg) {
    net_tcp_result_t r{};
    r.status = 0;
    r.tag = "net_tcp";
    r.version = 100;
    return r;
}

int net_tcp_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
