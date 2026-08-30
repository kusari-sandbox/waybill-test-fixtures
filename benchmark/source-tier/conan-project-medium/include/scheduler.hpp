// scheduler.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_SCHEDULER_HPP
#define WAYBILL_FIXTURE_CONAN_SCHEDULER_HPP

#include <string>

namespace waybill_fixture_conan {

struct scheduler_config_t {
    std::string name;
    int flags = 0;
};

struct scheduler_result_t {
    int status;
    std::string tag;
    int version;
};

scheduler_result_t scheduler_init(const scheduler_config_t& cfg);
int scheduler_shutdown();

}  // namespace waybill_fixture_conan

#endif
