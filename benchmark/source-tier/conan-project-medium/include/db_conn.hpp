// db_conn.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_DB_CONN_HPP
#define WAYBILL_FIXTURE_CONAN_DB_CONN_HPP

#include <string>

namespace waybill_fixture_conan {

struct db_conn_config_t {
    std::string name;
    int flags = 0;
};

struct db_conn_result_t {
    int status;
    std::string tag;
    int version;
};

db_conn_result_t db_conn_init(const db_conn_config_t& cfg);
int db_conn_shutdown();

}  // namespace waybill_fixture_conan

#endif
