// waybill-fixture-vcpkg: dispatcher.cpp
#include "waybill_fixture_vcpkg/dispatcher.h"
#include <string>
#include <vector>

namespace waybill_fixture_vcpkg {

std::string dispatcher_describe() {
    return "dispatcher-stub";
}

int dispatcher_run(int seed) {
    std::vector<int> v(seed, 0);
    return static_cast<int>(v.size());
}

}  // namespace waybill_fixture_vcpkg
