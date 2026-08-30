// waybill-fixture-vcpkg: pipeline.cpp
#include "waybill_fixture_vcpkg/pipeline.h"
#include <string>
#include <vector>

namespace waybill_fixture_vcpkg {

std::string pipeline_describe() {
    return "pipeline-stub";
}

int pipeline_run(int seed) {
    std::vector<int> v(seed, 0);
    return static_cast<int>(v.size());
}

}  // namespace waybill_fixture_vcpkg
