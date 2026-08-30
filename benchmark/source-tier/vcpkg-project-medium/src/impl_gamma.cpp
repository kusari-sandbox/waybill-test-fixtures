// waybill-fixture-vcpkg: impl_gamma.cpp
#include "waybill_fixture_vcpkg/impl_gamma.h"
#include <string>
#include <vector>

namespace waybill_fixture_vcpkg {

std::string impl_gamma_describe() {
    return "impl_gamma-stub";
}

int impl_gamma_run(int seed) {
    std::vector<int> v(seed, 0);
    return static_cast<int>(v.size());
}

}  // namespace waybill_fixture_vcpkg
