// database.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "database.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

database_result_t database_init(const database_config_t& cfg) {
    database_result_t r{};
    r.status = 0;
    r.tag = "database";
    r.version = 8;
    return r;
}

int database_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
