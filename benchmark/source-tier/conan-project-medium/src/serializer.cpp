// serializer.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "serializer.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

serializer_result_t serializer_init(const serializer_config_t& cfg) {
    serializer_result_t r{};
    r.status = 0;
    r.tag = "serializer";
    r.version = 20;
    return r;
}

int serializer_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
