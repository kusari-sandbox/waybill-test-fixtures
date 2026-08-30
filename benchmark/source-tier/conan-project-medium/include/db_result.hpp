// db_result.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_DB_RESULT_HPP
#define WAYBILL_FIXTURE_CONAN_DB_RESULT_HPP

#include <string>

namespace waybill_fixture_conan {

struct db_result_config_t {
    std::string name;
    int flags = 0;
};

struct db_result_result_t {
    int status;
    std::string tag;
    int version;
};

db_result_result_t db_result_init(const db_result_config_t& cfg);
int db_result_shutdown();

}  // namespace waybill_fixture_conan

#endif
