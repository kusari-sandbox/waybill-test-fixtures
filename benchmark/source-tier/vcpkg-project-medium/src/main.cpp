// waybill-fixture-vcpkg: main.cpp
#include "waybill_fixture_vcpkg/main.h"
#include <string>
#include <vector>

namespace waybill_fixture_vcpkg {

std::string main_describe() {
    return "main-stub";
}

int main_run(int seed) {
    std::vector<int> v(seed, 0);
    return static_cast<int>(v.size());
}

}  // namespace waybill_fixture_vcpkg
