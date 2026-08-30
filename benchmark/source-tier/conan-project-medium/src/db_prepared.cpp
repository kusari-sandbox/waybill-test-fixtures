// db_prepared.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "db_prepared.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

db_prepared_result_t db_prepared_init(const db_prepared_config_t& cfg) {
    db_prepared_result_t r{};
    r.status = 0;
    r.tag = "db_prepared";
    r.version = 147;
    return r;
}

int db_prepared_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
