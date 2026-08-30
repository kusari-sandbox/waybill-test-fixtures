// waybill-fixture-vcpkg: worker.cpp
#include "waybill_fixture_vcpkg/worker.h"
#include <string>
#include <vector>

namespace waybill_fixture_vcpkg {

std::string worker_describe() {
    return "worker-stub";
}

int worker_run(int seed) {
    std::vector<int> v(seed, 0);
    return static_cast<int>(v.size());
}

}  // namespace waybill_fixture_vcpkg
