// handlers.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_HANDLERS_HPP
#define WAYBILL_FIXTURE_CONAN_HANDLERS_HPP

#include <string>

namespace waybill_fixture_conan {

struct handlers_config_t {
    std::string name;
    int flags = 0;
};

struct handlers_result_t {
    int status;
    std::string tag;
    int version;
};

handlers_result_t handlers_init(const handlers_config_t& cfg);
int handlers_shutdown();

}  // namespace waybill_fixture_conan

#endif
