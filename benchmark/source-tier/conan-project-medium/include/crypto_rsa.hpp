// crypto_rsa.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_CRYPTO_RSA_HPP
#define WAYBILL_FIXTURE_CONAN_CRYPTO_RSA_HPP

#include <string>

namespace waybill_fixture_conan {

struct crypto_rsa_config_t {
    std::string name;
    int flags = 0;
};

struct crypto_rsa_result_t {
    int status;
    std::string tag;
    int version;
};

crypto_rsa_result_t crypto_rsa_init(const crypto_rsa_config_t& cfg);
int crypto_rsa_shutdown();

}  // namespace waybill_fixture_conan

#endif
