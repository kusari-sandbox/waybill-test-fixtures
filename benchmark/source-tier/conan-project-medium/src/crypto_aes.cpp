// crypto_aes.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "crypto_aes.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

crypto_aes_result_t crypto_aes_init(const crypto_aes_config_t& cfg) {
    crypto_aes_result_t r{};
    r.status = 0;
    r.tag = "crypto_aes";
    r.version = 122;
    return r;
}

int crypto_aes_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
