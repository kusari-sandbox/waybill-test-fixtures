// server.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_SERVER_HPP
#define WAYBILL_FIXTURE_CONAN_SERVER_HPP

#include <string>

namespace waybill_fixture_conan {

struct server_config_t {
    std::string name;
    int flags = 0;
};

struct server_result_t {
    int status;
    std::string tag;
    int version;
};

server_result_t server_init(const server_config_t& cfg);
int server_shutdown();

}  // namespace waybill_fixture_conan

#endif
