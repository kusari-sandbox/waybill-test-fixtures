// tracer.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "tracer.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

tracer_result_t tracer_init(const tracer_config_t& cfg) {
    tracer_result_t r{};
    r.status = 0;
    r.tag = "tracer";
    r.version = 33;
    return r;
}

int tracer_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
