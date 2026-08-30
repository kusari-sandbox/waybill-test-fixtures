// db_prepared.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_DB_PREPARED_HPP
#define WAYBILL_FIXTURE_CONAN_DB_PREPARED_HPP

#include <string>

namespace waybill_fixture_conan {

struct db_prepared_config_t {
    std::string name;
    int flags = 0;
};

struct db_prepared_result_t {
    int status;
    std::string tag;
    int version;
};

db_prepared_result_t db_prepared_init(const db_prepared_config_t& cfg);
int db_prepared_shutdown();

}  // namespace waybill_fixture_conan

#endif
