// net_tls.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_NET_TLS_HPP
#define WAYBILL_FIXTURE_CONAN_NET_TLS_HPP

#include <string>

namespace waybill_fixture_conan {

struct net_tls_config_t {
    std::string name;
    int flags = 0;
};

struct net_tls_result_t {
    int status;
    std::string tag;
    int version;
};

net_tls_result_t net_tls_init(const net_tls_config_t& cfg);
int net_tls_shutdown();

}  // namespace waybill_fixture_conan

#endif
