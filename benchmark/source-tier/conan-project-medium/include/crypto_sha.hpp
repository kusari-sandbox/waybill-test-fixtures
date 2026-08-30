// crypto_sha.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_CRYPTO_SHA_HPP
#define WAYBILL_FIXTURE_CONAN_CRYPTO_SHA_HPP

#include <string>

namespace waybill_fixture_conan {

struct crypto_sha_config_t {
    std::string name;
    int flags = 0;
};

struct crypto_sha_result_t {
    int status;
    std::string tag;
    int version;
};

crypto_sha_result_t crypto_sha_init(const crypto_sha_config_t& cfg);
int crypto_sha_shutdown();

}  // namespace waybill_fixture_conan

#endif
