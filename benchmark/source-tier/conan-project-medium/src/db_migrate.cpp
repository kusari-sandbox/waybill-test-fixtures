// db_migrate.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "db_migrate.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

db_migrate_result_t db_migrate_init(const db_migrate_config_t& cfg) {
    db_migrate_result_t r{};
    r.status = 0;
    r.tag = "db_migrate";
    r.version = 144;
    return r;
}

int db_migrate_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
