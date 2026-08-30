// db_index.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "db_index.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

db_index_result_t db_index_init(const db_index_config_t& cfg) {
    db_index_result_t r{};
    r.status = 0;
    r.tag = "db_index";
    r.version = 149;
    return r;
}

int db_index_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
