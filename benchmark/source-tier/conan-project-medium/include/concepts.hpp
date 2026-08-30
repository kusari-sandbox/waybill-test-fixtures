// concepts.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_CONCEPTS_HPP
#define WAYBILL_FIXTURE_CONAN_CONCEPTS_HPP

#include <string>

namespace waybill_fixture_conan {

struct concepts_config_t {
    std::string name;
    int flags = 0;
};

struct concepts_result_t {
    int status;
    std::string tag;
    int version;
};

concepts_result_t concepts_init(const concepts_config_t& cfg);
int concepts_shutdown();

}  // namespace waybill_fixture_conan

#endif
