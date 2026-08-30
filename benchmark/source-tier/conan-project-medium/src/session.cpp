// session.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "session.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

session_result_t session_init(const session_config_t& cfg) {
    session_result_t r{};
    r.status = 0;
    r.tag = "session";
    r.version = 13;
    return r;
}

int session_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
