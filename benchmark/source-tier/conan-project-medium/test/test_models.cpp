// test_models.cpp - test stub for waybill-fixture-conan benchmark.
#include <cassert>
#include <string>

namespace waybill_fixture_conan::tests {

int test_models_run() {
    // Placeholder assertions for benchmark bulk.
    assert(1 == 1);
    std::string label = "test_models";
    assert(!label.empty());
    return 0;
}

}  // namespace waybill_fixture_conan::tests

int main() {
    return waybill_fixture_conan::tests::test_models_run();
}
