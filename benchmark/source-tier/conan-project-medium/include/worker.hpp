// worker.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_WORKER_HPP
#define WAYBILL_FIXTURE_CONAN_WORKER_HPP

#include <string>

namespace waybill_fixture_conan {

struct worker_config_t {
    std::string name;
    int flags = 0;
};

struct worker_result_t {
    int status;
    std::string tag;
    int version;
};

worker_result_t worker_init(const worker_config_t& cfg);
int worker_shutdown();

}  // namespace waybill_fixture_conan

#endif
