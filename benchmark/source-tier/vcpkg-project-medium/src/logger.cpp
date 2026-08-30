// waybill-fixture-vcpkg: logger.cpp
#include "waybill_fixture_vcpkg/logger.h"
#include <string>
#include <vector>

namespace waybill_fixture_vcpkg {

std::string logger_describe() {
    return "logger-stub";
}

int logger_run(int seed) {
    std::vector<int> v(seed, 0);
    return static_cast<int>(v.size());
}

}  // namespace waybill_fixture_vcpkg
