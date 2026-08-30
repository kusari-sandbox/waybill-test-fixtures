// net_headers.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_NET_HEADERS_HPP
#define WAYBILL_FIXTURE_CONAN_NET_HEADERS_HPP

#include <string>

namespace waybill_fixture_conan {

struct net_headers_config_t {
    std::string name;
    int flags = 0;
};

struct net_headers_result_t {
    int status;
    std::string tag;
    int version;
};

net_headers_result_t net_headers_init(const net_headers_config_t& cfg);
int net_headers_shutdown();

}  // namespace waybill_fixture_conan

#endif
