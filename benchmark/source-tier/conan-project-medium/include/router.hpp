// router.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_ROUTER_HPP
#define WAYBILL_FIXTURE_CONAN_ROUTER_HPP

#include <string>

namespace waybill_fixture_conan {

struct router_config_t {
    std::string name;
    int flags = 0;
};

struct router_result_t {
    int status;
    std::string tag;
    int version;
};

router_result_t router_init(const router_config_t& cfg);
int router_shutdown();

}  // namespace waybill_fixture_conan

#endif
