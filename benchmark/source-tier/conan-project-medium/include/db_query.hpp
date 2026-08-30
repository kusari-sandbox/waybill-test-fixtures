// db_query.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_DB_QUERY_HPP
#define WAYBILL_FIXTURE_CONAN_DB_QUERY_HPP

#include <string>

namespace waybill_fixture_conan {

struct db_query_config_t {
    std::string name;
    int flags = 0;
};

struct db_query_result_t {
    int status;
    std::string tag;
    int version;
};

db_query_result_t db_query_init(const db_query_config_t& cfg);
int db_query_shutdown();

}  // namespace waybill_fixture_conan

#endif
