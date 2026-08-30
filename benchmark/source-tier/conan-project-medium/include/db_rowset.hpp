// db_rowset.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_DB_ROWSET_HPP
#define WAYBILL_FIXTURE_CONAN_DB_ROWSET_HPP

#include <string>

namespace waybill_fixture_conan {

struct db_rowset_config_t {
    std::string name;
    int flags = 0;
};

struct db_rowset_result_t {
    int status;
    std::string tag;
    int version;
};

db_rowset_result_t db_rowset_init(const db_rowset_config_t& cfg);
int db_rowset_shutdown();

}  // namespace waybill_fixture_conan

#endif
