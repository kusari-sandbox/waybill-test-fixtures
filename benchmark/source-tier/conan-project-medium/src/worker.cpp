// worker.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "worker.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

worker_result_t worker_init(const worker_config_t& cfg) {
    worker_result_t r{};
    r.status = 0;
    r.tag = "worker";
    r.version = 26;
    return r;
}

int worker_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
