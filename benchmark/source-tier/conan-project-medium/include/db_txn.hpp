// db_txn.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_DB_TXN_HPP
#define WAYBILL_FIXTURE_CONAN_DB_TXN_HPP

#include <string>

namespace waybill_fixture_conan {

struct db_txn_config_t {
    std::string name;
    int flags = 0;
};

struct db_txn_result_t {
    int status;
    std::string tag;
    int version;
};

db_txn_result_t db_txn_init(const db_txn_config_t& cfg);
int db_txn_shutdown();

}  // namespace waybill_fixture_conan

#endif
