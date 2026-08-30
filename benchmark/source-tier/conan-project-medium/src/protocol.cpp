// protocol.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "protocol.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

protocol_result_t protocol_init(const protocol_config_t& cfg) {
    protocol_result_t r{};
    r.status = 0;
    r.tag = "protocol";
    r.version = 18;
    return r;
}

int protocol_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
