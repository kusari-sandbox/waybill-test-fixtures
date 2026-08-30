// db_txn.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "db_txn.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

db_txn_result_t db_txn_init(const db_txn_config_t& cfg) {
    db_txn_result_t r{};
    r.status = 0;
    r.tag = "db_txn";
    r.version = 145;
    return r;
}

int db_txn_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
