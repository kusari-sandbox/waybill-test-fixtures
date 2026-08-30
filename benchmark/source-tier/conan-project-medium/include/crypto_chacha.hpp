// crypto_chacha.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_CRYPTO_CHACHA_HPP
#define WAYBILL_FIXTURE_CONAN_CRYPTO_CHACHA_HPP

#include <string>

namespace waybill_fixture_conan {

struct crypto_chacha_config_t {
    std::string name;
    int flags = 0;
};

struct crypto_chacha_result_t {
    int status;
    std::string tag;
    int version;
};

crypto_chacha_result_t crypto_chacha_init(const crypto_chacha_config_t& cfg);
int crypto_chacha_shutdown();

}  // namespace waybill_fixture_conan

#endif
