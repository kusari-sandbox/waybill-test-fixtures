// crypto_ed25519.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_CRYPTO_ED25519_HPP
#define WAYBILL_FIXTURE_CONAN_CRYPTO_ED25519_HPP

#include <string>

namespace waybill_fixture_conan {

struct crypto_ed25519_config_t {
    std::string name;
    int flags = 0;
};

struct crypto_ed25519_result_t {
    int status;
    std::string tag;
    int version;
};

crypto_ed25519_result_t crypto_ed25519_init(const crypto_ed25519_config_t& cfg);
int crypto_ed25519_shutdown();

}  // namespace waybill_fixture_conan

#endif
