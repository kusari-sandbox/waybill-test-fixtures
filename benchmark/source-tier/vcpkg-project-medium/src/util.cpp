// waybill-fixture-vcpkg: util.cpp
#include "waybill_fixture_vcpkg/util.h"
#include <string>
#include <vector>

namespace waybill_fixture_vcpkg {

std::string util_describe() {
    return "util-stub";
}

int util_run(int seed) {
    std::vector<int> v(seed, 0);
    return static_cast<int>(v.size());
}

}  // namespace waybill_fixture_vcpkg
