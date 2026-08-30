// test_util_json.cpp - test stub for waybill-fixture-conan benchmark.
#include <cassert>
#include <string>

namespace waybill_fixture_conan::tests {

int test_util_json_run() {
    assert(1 == 1);
    std::string label = "test_util_json";
    assert(!label.empty());
    return 0;
}

}  // namespace waybill_fixture_conan::tests

int main() {
    return waybill_fixture_conan::tests::test_util_json_run();
}
