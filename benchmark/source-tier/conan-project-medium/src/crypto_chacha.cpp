// crypto_chacha.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "crypto_chacha.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

crypto_chacha_result_t crypto_chacha_init(const crypto_chacha_config_t& cfg) {
    crypto_chacha_result_t r{};
    r.status = 0;
    r.tag = "crypto_chacha";
    r.version = 127;
    return r;
}

int crypto_chacha_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
