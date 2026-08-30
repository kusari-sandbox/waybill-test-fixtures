// crypto_x25519.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_CRYPTO_X25519_HPP
#define WAYBILL_FIXTURE_CONAN_CRYPTO_X25519_HPP

#include <string>

namespace waybill_fixture_conan {

struct crypto_x25519_config_t {
    std::string name;
    int flags = 0;
};

struct crypto_x25519_result_t {
    int status;
    std::string tag;
    int version;
};

crypto_x25519_result_t crypto_x25519_init(const crypto_x25519_config_t& cfg);
int crypto_x25519_shutdown();

}  // namespace waybill_fixture_conan

#endif
