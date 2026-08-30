// validator.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_VALIDATOR_HPP
#define WAYBILL_FIXTURE_CONAN_VALIDATOR_HPP

#include <string>

namespace waybill_fixture_conan {

struct validator_config_t {
    std::string name;
    int flags = 0;
};

struct validator_result_t {
    int status;
    std::string tag;
    int version;
};

validator_result_t validator_init(const validator_config_t& cfg);
int validator_shutdown();

}  // namespace waybill_fixture_conan

#endif
