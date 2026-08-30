// net_grpc.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_NET_GRPC_HPP
#define WAYBILL_FIXTURE_CONAN_NET_GRPC_HPP

#include <string>

namespace waybill_fixture_conan {

struct net_grpc_config_t {
    std::string name;
    int flags = 0;
};

struct net_grpc_result_t {
    int status;
    std::string tag;
    int version;
};

net_grpc_result_t net_grpc_init(const net_grpc_config_t& cfg);
int net_grpc_shutdown();

}  // namespace waybill_fixture_conan

#endif
