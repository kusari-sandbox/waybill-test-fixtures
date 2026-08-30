// db_index.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_DB_INDEX_HPP
#define WAYBILL_FIXTURE_CONAN_DB_INDEX_HPP

#include <string>

namespace waybill_fixture_conan {

struct db_index_config_t {
    std::string name;
    int flags = 0;
};

struct db_index_result_t {
    int status;
    std::string tag;
    int version;
};

db_index_result_t db_index_init(const db_index_config_t& cfg);
int db_index_shutdown();

}  // namespace waybill_fixture_conan

#endif
