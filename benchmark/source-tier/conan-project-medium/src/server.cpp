// server.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "server.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

server_result_t server_init(const server_config_t& cfg) {
    server_result_t r{};
    r.status = 0;
    r.tag = "server";
    r.version = 16;
    return r;
}

int server_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
