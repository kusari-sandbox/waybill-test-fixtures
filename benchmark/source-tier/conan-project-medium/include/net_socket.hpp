// net_socket.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_NET_SOCKET_HPP
#define WAYBILL_FIXTURE_CONAN_NET_SOCKET_HPP

#include <string>

namespace waybill_fixture_conan {

struct net_socket_config_t {
    std::string name;
    int flags = 0;
};

struct net_socket_result_t {
    int status;
    std::string tag;
    int version;
};

net_socket_result_t net_socket_init(const net_socket_config_t& cfg);
int net_socket_shutdown();

}  // namespace waybill_fixture_conan

#endif
