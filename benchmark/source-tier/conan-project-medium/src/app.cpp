// app.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "app.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

app_result_t app_init(const app_config_t& cfg) {
    app_result_t r{};
    r.status = 0;
    r.tag = "app";
    r.version = 2;
    return r;
}

int app_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
