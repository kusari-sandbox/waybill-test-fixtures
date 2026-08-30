// net_http.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "net_http.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

net_http_result_t net_http_init(const net_http_config_t& cfg) {
    net_http_result_t r{};
    r.status = 0;
    r.tag = "net_http";
    r.version = 102;
    return r;
}

int net_http_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
