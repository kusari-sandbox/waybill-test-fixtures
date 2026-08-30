// dispatcher.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_DISPATCHER_HPP
#define WAYBILL_FIXTURE_CONAN_DISPATCHER_HPP

#include <string>

namespace waybill_fixture_conan {

struct dispatcher_config_t {
    std::string name;
    int flags = 0;
};

struct dispatcher_result_t {
    int status;
    std::string tag;
    int version;
};

dispatcher_result_t dispatcher_init(const dispatcher_config_t& cfg);
int dispatcher_shutdown();

}  // namespace waybill_fixture_conan

#endif
