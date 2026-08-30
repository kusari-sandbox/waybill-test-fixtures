// crypto_x25519.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "crypto_x25519.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

crypto_x25519_result_t crypto_x25519_init(const crypto_x25519_config_t& cfg) {
    crypto_x25519_result_t r{};
    r.status = 0;
    r.tag = "crypto_x25519";
    r.version = 129;
    return r;
}

int crypto_x25519_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
