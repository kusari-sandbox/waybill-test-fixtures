// signal_handler.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_SIGNAL_HANDLER_HPP
#define WAYBILL_FIXTURE_CONAN_SIGNAL_HANDLER_HPP

#include <string>

namespace waybill_fixture_conan {

struct signal_handler_config_t {
    std::string name;
    int flags = 0;
};

struct signal_handler_result_t {
    int status;
    std::string tag;
    int version;
};

signal_handler_result_t signal_handler_init(const signal_handler_config_t& cfg);
int signal_handler_shutdown();

}  // namespace waybill_fixture_conan

#endif
