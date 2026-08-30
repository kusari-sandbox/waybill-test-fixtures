// crypto_ecdsa.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "crypto_ecdsa.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

crypto_ecdsa_result_t crypto_ecdsa_init(const crypto_ecdsa_config_t& cfg) {
    crypto_ecdsa_result_t r{};
    r.status = 0;
    r.tag = "crypto_ecdsa";
    r.version = 124;
    return r;
}

int crypto_ecdsa_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
