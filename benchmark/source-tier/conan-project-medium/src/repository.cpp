// repository.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "repository.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

repository_result_t repository_init(const repository_config_t& cfg) {
    repository_result_t r{};
    r.status = 0;
    r.tag = "repository";
    r.version = 7;
    return r;
}

int repository_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
