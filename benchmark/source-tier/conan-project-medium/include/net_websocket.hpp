// net_websocket.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_NET_WEBSOCKET_HPP
#define WAYBILL_FIXTURE_CONAN_NET_WEBSOCKET_HPP

#include <string>

namespace waybill_fixture_conan {

struct net_websocket_config_t {
    std::string name;
    int flags = 0;
};

struct net_websocket_result_t {
    int status;
    std::string tag;
    int version;
};

net_websocket_result_t net_websocket_init(const net_websocket_config_t& cfg);
int net_websocket_shutdown();

}  // namespace waybill_fixture_conan

#endif
