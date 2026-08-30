// waybill-fixture-vcpkg: impl_alpha.cpp
#include "waybill_fixture_vcpkg/impl_alpha.h"
#include <string>
#include <vector>

namespace waybill_fixture_vcpkg {

std::string impl_alpha_describe() {
    return "impl_alpha-stub";
}

int impl_alpha_run(int seed) {
    std::vector<int> v(seed, 0);
    return static_cast<int>(v.size());
}

}  // namespace waybill_fixture_vcpkg
