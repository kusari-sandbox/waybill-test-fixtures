// crypto_kdf.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_CRYPTO_KDF_HPP
#define WAYBILL_FIXTURE_CONAN_CRYPTO_KDF_HPP

#include <string>

namespace waybill_fixture_conan {

struct crypto_kdf_config_t {
    std::string name;
    int flags = 0;
};

struct crypto_kdf_result_t {
    int status;
    std::string tag;
    int version;
};

crypto_kdf_result_t crypto_kdf_init(const crypto_kdf_config_t& cfg);
int crypto_kdf_shutdown();

}  // namespace waybill_fixture_conan

#endif
