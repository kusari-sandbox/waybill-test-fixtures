// waybill-fixture-vcpkg: deserializer.cpp
#include "waybill_fixture_vcpkg/deserializer.h"
#include <string>
#include <vector>

namespace waybill_fixture_vcpkg {

std::string deserializer_describe() {
    return "deserializer-stub";
}

int deserializer_run(int seed) {
    std::vector<int> v(seed, 0);
    return static_cast<int>(v.size());
}

}  // namespace waybill_fixture_vcpkg
