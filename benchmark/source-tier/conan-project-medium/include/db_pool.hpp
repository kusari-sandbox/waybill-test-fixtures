// db_pool.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_DB_POOL_HPP
#define WAYBILL_FIXTURE_CONAN_DB_POOL_HPP

#include <string>

namespace waybill_fixture_conan {

struct db_pool_config_t {
    std::string name;
    int flags = 0;
};

struct db_pool_result_t {
    int status;
    std::string tag;
    int version;
};

db_pool_result_t db_pool_init(const db_pool_config_t& cfg);
int db_pool_shutdown();

}  // namespace waybill_fixture_conan

#endif
