// net_tcp.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_NET_TCP_HPP
#define WAYBILL_FIXTURE_CONAN_NET_TCP_HPP

#include <string>

namespace waybill_fixture_conan {

struct net_tcp_config_t {
    std::string name;
    int flags = 0;
};

struct net_tcp_result_t {
    int status;
    std::string tag;
    int version;
};

net_tcp_result_t net_tcp_init(const net_tcp_config_t& cfg);
int net_tcp_shutdown();

}  // namespace waybill_fixture_conan

#endif
