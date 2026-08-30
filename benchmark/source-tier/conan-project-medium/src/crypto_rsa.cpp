// crypto_rsa.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "crypto_rsa.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

crypto_rsa_result_t crypto_rsa_init(const crypto_rsa_config_t& cfg) {
    crypto_rsa_result_t r{};
    r.status = 0;
    r.tag = "crypto_rsa";
    r.version = 123;
    return r;
}

int crypto_rsa_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
