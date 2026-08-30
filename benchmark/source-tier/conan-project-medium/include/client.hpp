// client.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_CLIENT_HPP
#define WAYBILL_FIXTURE_CONAN_CLIENT_HPP

#include <string>

namespace waybill_fixture_conan {

struct client_config_t {
    std::string name;
    int flags = 0;
};

struct client_result_t {
    int status;
    std::string tag;
    int version;
};

client_result_t client_init(const client_config_t& cfg);
int client_shutdown();

}  // namespace waybill_fixture_conan

#endif
