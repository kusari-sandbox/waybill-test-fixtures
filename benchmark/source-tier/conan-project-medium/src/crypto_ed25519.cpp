// crypto_ed25519.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "crypto_ed25519.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

crypto_ed25519_result_t crypto_ed25519_init(const crypto_ed25519_config_t& cfg) {
    crypto_ed25519_result_t r{};
    r.status = 0;
    r.tag = "crypto_ed25519";
    r.version = 128;
    return r;
}

int crypto_ed25519_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
