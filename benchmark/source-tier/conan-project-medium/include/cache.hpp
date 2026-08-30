// cache.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_CACHE_HPP
#define WAYBILL_FIXTURE_CONAN_CACHE_HPP

#include <string>

namespace waybill_fixture_conan {

struct cache_config_t {
    std::string name;
    int flags = 0;
};

struct cache_result_t {
    int status;
    std::string tag;
    int version;
};

cache_result_t cache_init(const cache_config_t& cfg);
int cache_shutdown();

}  // namespace waybill_fixture_conan

#endif
