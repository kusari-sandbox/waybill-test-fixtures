// net_http.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_NET_HTTP_HPP
#define WAYBILL_FIXTURE_CONAN_NET_HTTP_HPP

#include <string>

namespace waybill_fixture_conan {

struct net_http_config_t {
    std::string name;
    int flags = 0;
};

struct net_http_result_t {
    int status;
    std::string tag;
    int version;
};

net_http_result_t net_http_init(const net_http_config_t& cfg);
int net_http_shutdown();

}  // namespace waybill_fixture_conan

#endif
