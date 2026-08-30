// net_dns.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "net_dns.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

net_dns_result_t net_dns_init(const net_dns_config_t& cfg) {
    net_dns_result_t r{};
    r.status = 0;
    r.tag = "net_dns";
    r.version = 105;
    return r;
}

int net_dns_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
