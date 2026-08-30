// crypto_hmac.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "crypto_hmac.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

crypto_hmac_result_t crypto_hmac_init(const crypto_hmac_config_t& cfg) {
    crypto_hmac_result_t r{};
    r.status = 0;
    r.tag = "crypto_hmac";
    r.version = 121;
    return r;
}

int crypto_hmac_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
