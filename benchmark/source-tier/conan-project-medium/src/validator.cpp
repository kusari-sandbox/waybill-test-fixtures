// validator.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "validator.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

validator_result_t validator_init(const validator_config_t& cfg) {
    validator_result_t r{};
    r.status = 0;
    r.tag = "validator";
    r.version = 22;
    return r;
}

int validator_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
