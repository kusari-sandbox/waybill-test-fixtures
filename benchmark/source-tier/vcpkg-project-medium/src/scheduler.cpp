// waybill-fixture-vcpkg: scheduler.cpp
#include "waybill_fixture_vcpkg/scheduler.h"
#include <string>
#include <vector>

namespace waybill_fixture_vcpkg {

std::string scheduler_describe() {
    return "scheduler-stub";
}

int scheduler_run(int seed) {
    std::vector<int> v(seed, 0);
    return static_cast<int>(v.size());
}

}  // namespace waybill_fixture_vcpkg
