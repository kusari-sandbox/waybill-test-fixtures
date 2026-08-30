// waybill-fixture-vcpkg: serializer.cpp
#include "waybill_fixture_vcpkg/serializer.h"
#include <string>
#include <vector>

namespace waybill_fixture_vcpkg {

std::string serializer_describe() {
    return "serializer-stub";
}

int serializer_run(int seed) {
    std::vector<int> v(seed, 0);
    return static_cast<int>(v.size());
}

}  // namespace waybill_fixture_vcpkg
