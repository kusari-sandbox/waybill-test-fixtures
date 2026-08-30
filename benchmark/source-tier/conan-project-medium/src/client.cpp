// client.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "client.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

client_result_t client_init(const client_config_t& cfg) {
    client_result_t r{};
    r.status = 0;
    r.tag = "client";
    r.version = 17;
    return r;
}

int client_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
