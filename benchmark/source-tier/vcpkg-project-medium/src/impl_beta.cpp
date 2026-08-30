// waybill-fixture-vcpkg: impl_beta.cpp
#include "waybill_fixture_vcpkg/impl_beta.h"
#include <string>
#include <vector>

namespace waybill_fixture_vcpkg {

std::string impl_beta_describe() {
    return "impl_beta-stub";
}

int impl_beta_run(int seed) {
    std::vector<int> v(seed, 0);
    return static_cast<int>(v.size());
}

}  // namespace waybill_fixture_vcpkg
