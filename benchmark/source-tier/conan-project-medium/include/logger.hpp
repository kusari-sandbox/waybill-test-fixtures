// logger.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_LOGGER_HPP
#define WAYBILL_FIXTURE_CONAN_LOGGER_HPP

#include <string>

namespace waybill_fixture_conan {

struct logger_config_t {
    std::string name;
    int flags = 0;
};

struct logger_result_t {
    int status;
    std::string tag;
    int version;
};

logger_result_t logger_init(const logger_config_t& cfg);
int logger_shutdown();

}  // namespace waybill_fixture_conan

#endif
