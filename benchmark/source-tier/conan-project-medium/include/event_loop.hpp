// event_loop.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_EVENT_LOOP_HPP
#define WAYBILL_FIXTURE_CONAN_EVENT_LOOP_HPP

#include <string>

namespace waybill_fixture_conan {

struct event_loop_config_t {
    std::string name;
    int flags = 0;
};

struct event_loop_result_t {
    int status;
    std::string tag;
    int version;
};

event_loop_result_t event_loop_init(const event_loop_config_t& cfg);
int event_loop_shutdown();

}  // namespace waybill_fixture_conan

#endif
