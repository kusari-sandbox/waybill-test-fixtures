// db_stream.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_DB_STREAM_HPP
#define WAYBILL_FIXTURE_CONAN_DB_STREAM_HPP

#include <string>

namespace waybill_fixture_conan {

struct db_stream_config_t {
    std::string name;
    int flags = 0;
};

struct db_stream_result_t {
    int status;
    std::string tag;
    int version;
};

db_stream_result_t db_stream_init(const db_stream_config_t& cfg);
int db_stream_shutdown();

}  // namespace waybill_fixture_conan

#endif
