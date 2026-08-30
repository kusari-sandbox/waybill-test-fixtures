// queue.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_QUEUE_HPP
#define WAYBILL_FIXTURE_CONAN_QUEUE_HPP

#include <string>

namespace waybill_fixture_conan {

struct queue_config_t {
    std::string name;
    int flags = 0;
};

struct queue_result_t {
    int status;
    std::string tag;
    int version;
};

queue_result_t queue_init(const queue_config_t& cfg);
int queue_shutdown();

}  // namespace waybill_fixture_conan

#endif
