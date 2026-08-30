// net_url.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_NET_URL_HPP
#define WAYBILL_FIXTURE_CONAN_NET_URL_HPP

#include <string>

namespace waybill_fixture_conan {

struct net_url_config_t {
    std::string name;
    int flags = 0;
};

struct net_url_result_t {
    int status;
    std::string tag;
    int version;
};

net_url_result_t net_url_init(const net_url_config_t& cfg);
int net_url_shutdown();

}  // namespace waybill_fixture_conan

#endif
