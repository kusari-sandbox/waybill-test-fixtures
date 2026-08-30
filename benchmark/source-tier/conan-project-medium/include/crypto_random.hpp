// crypto_random.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_CRYPTO_RANDOM_HPP
#define WAYBILL_FIXTURE_CONAN_CRYPTO_RANDOM_HPP

#include <string>

namespace waybill_fixture_conan {

struct crypto_random_config_t {
    std::string name;
    int flags = 0;
};

struct crypto_random_result_t {
    int status;
    std::string tag;
    int version;
};

crypto_random_result_t crypto_random_init(const crypto_random_config_t& cfg);
int crypto_random_shutdown();

}  // namespace waybill_fixture_conan

#endif
