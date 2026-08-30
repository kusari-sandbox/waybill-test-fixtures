// waybill-fixture-vcpkg: handlers.cpp
#include "waybill_fixture_vcpkg/handlers.h"
#include <string>
#include <vector>

namespace waybill_fixture_vcpkg {

std::string handlers_describe() {
    return "handlers-stub";
}

int handlers_run(int seed) {
    std::vector<int> v(seed, 0);
    return static_cast<int>(v.size());
}

}  // namespace waybill_fixture_vcpkg
