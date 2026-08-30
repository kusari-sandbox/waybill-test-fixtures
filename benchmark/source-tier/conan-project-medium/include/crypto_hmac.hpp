// crypto_hmac.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_CRYPTO_HMAC_HPP
#define WAYBILL_FIXTURE_CONAN_CRYPTO_HMAC_HPP

#include <string>

namespace waybill_fixture_conan {

struct crypto_hmac_config_t {
    std::string name;
    int flags = 0;
};

struct crypto_hmac_result_t {
    int status;
    std::string tag;
    int version;
};

crypto_hmac_result_t crypto_hmac_init(const crypto_hmac_config_t& cfg);
int crypto_hmac_shutdown();

}  // namespace waybill_fixture_conan

#endif
