// db_conn.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "db_conn.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

db_conn_result_t db_conn_init(const db_conn_config_t& cfg) {
    db_conn_result_t r{};
    r.status = 0;
    r.tag = "db_conn";
    r.version = 140;
    return r;
}

int db_conn_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
