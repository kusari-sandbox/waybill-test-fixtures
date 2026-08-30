// db_rowset.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "db_rowset.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

db_rowset_result_t db_rowset_init(const db_rowset_config_t& cfg) {
    db_rowset_result_t r{};
    r.status = 0;
    r.tag = "db_rowset";
    r.version = 146;
    return r;
}

int db_rowset_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
