// net_udp.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_NET_UDP_HPP
#define WAYBILL_FIXTURE_CONAN_NET_UDP_HPP

#include <string>

namespace waybill_fixture_conan {

struct net_udp_config_t {
    std::string name;
    int flags = 0;
};

struct net_udp_result_t {
    int status;
    std::string tag;
    int version;
};

net_udp_result_t net_udp_init(const net_udp_config_t& cfg);
int net_udp_shutdown();

}  // namespace waybill_fixture_conan

#endif
