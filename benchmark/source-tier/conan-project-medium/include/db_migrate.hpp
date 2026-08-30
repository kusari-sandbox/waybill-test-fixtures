// db_migrate.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_DB_MIGRATE_HPP
#define WAYBILL_FIXTURE_CONAN_DB_MIGRATE_HPP

#include <string>

namespace waybill_fixture_conan {

struct db_migrate_config_t {
    std::string name;
    int flags = 0;
};

struct db_migrate_result_t {
    int status;
    std::string tag;
    int version;
};

db_migrate_result_t db_migrate_init(const db_migrate_config_t& cfg);
int db_migrate_shutdown();

}  // namespace waybill_fixture_conan

#endif
