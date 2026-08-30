// crypto_sha.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "crypto_sha.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

crypto_sha_result_t crypto_sha_init(const crypto_sha_config_t& cfg) {
    crypto_sha_result_t r{};
    r.status = 0;
    r.tag = "crypto_sha";
    r.version = 120;
    return r;
}

int crypto_sha_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
