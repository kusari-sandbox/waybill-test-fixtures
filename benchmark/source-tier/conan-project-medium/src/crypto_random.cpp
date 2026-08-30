// crypto_random.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "crypto_random.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

crypto_random_result_t crypto_random_init(const crypto_random_config_t& cfg) {
    crypto_random_result_t r{};
    r.status = 0;
    r.tag = "crypto_random";
    r.version = 125;
    return r;
}

int crypto_random_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
