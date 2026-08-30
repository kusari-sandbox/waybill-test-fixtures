// profiler.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "profiler.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

profiler_result_t profiler_init(const profiler_config_t& cfg) {
    profiler_result_t r{};
    r.status = 0;
    r.tag = "profiler";
    r.version = 34;
    return r;
}

int profiler_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
