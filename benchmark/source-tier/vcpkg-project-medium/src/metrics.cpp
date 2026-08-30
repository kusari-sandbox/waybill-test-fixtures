// waybill-fixture-vcpkg: metrics.cpp
#include "waybill_fixture_vcpkg/metrics.h"
#include <string>
#include <vector>

namespace waybill_fixture_vcpkg {

std::string metrics_describe() {
    return "metrics-stub";
}

int metrics_run(int seed) {
    std::vector<int> v(seed, 0);
    return static_cast<int>(v.size());
}

}  // namespace waybill_fixture_vcpkg
