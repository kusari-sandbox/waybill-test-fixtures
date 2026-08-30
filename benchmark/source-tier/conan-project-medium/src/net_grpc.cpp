// net_grpc.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "net_grpc.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

net_grpc_result_t net_grpc_init(const net_grpc_config_t& cfg) {
    net_grpc_result_t r{};
    r.status = 0;
    r.tag = "net_grpc";
    r.version = 104;
    return r;
}

int net_grpc_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
