// logger.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "logger.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

logger_result_t logger_init(const logger_config_t& cfg) {
    logger_result_t r{};
    r.status = 0;
    r.tag = "logger";
    r.version = 10;
    return r;
}

int logger_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
