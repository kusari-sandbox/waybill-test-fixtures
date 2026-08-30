// net_dns.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_NET_DNS_HPP
#define WAYBILL_FIXTURE_CONAN_NET_DNS_HPP

#include <string>

namespace waybill_fixture_conan {

struct net_dns_config_t {
    std::string name;
    int flags = 0;
};

struct net_dns_result_t {
    int status;
    std::string tag;
    int version;
};

net_dns_result_t net_dns_init(const net_dns_config_t& cfg);
int net_dns_shutdown();

}  // namespace waybill_fixture_conan

#endif
