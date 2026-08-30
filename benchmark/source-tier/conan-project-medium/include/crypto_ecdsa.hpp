// crypto_ecdsa.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_CRYPTO_ECDSA_HPP
#define WAYBILL_FIXTURE_CONAN_CRYPTO_ECDSA_HPP

#include <string>

namespace waybill_fixture_conan {

struct crypto_ecdsa_config_t {
    std::string name;
    int flags = 0;
};

struct crypto_ecdsa_result_t {
    int status;
    std::string tag;
    int version;
};

crypto_ecdsa_result_t crypto_ecdsa_init(const crypto_ecdsa_config_t& cfg);
int crypto_ecdsa_shutdown();

}  // namespace waybill_fixture_conan

#endif
