// net_udp.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "net_udp.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

net_udp_result_t net_udp_init(const net_udp_config_t& cfg) {
    net_udp_result_t r{};
    r.status = 0;
    r.tag = "net_udp";
    r.version = 101;
    return r;
}

int net_udp_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
