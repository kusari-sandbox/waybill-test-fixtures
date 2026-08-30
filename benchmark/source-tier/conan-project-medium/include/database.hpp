// database.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_DATABASE_HPP
#define WAYBILL_FIXTURE_CONAN_DATABASE_HPP

#include <string>

namespace waybill_fixture_conan {

struct database_config_t {
    std::string name;
    int flags = 0;
};

struct database_result_t {
    int status;
    std::string tag;
    int version;
};

database_result_t database_init(const database_config_t& cfg);
int database_shutdown();

}  // namespace waybill_fixture_conan

#endif
