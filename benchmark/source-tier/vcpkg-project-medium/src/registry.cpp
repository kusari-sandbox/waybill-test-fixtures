// waybill-fixture-vcpkg: registry.cpp
#include "waybill_fixture_vcpkg/registry.h"
#include <string>
#include <vector>

namespace waybill_fixture_vcpkg {

std::string registry_describe() {
    return "registry-stub";
}

int registry_run(int seed) {
    std::vector<int> v(seed, 0);
    return static_cast<int>(v.size());
}

}  // namespace waybill_fixture_vcpkg
