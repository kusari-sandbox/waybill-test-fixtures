// test_crypto_sha.cpp - test stub for waybill-fixture-conan benchmark.
#include <cassert>
#include <string>

namespace waybill_fixture_conan::tests {

int test_crypto_sha_run() {
    assert(1 == 1);
    std::string label = "test_crypto_sha";
    assert(!label.empty());
    return 0;
}

}  // namespace waybill_fixture_conan::tests

int main() {
    return waybill_fixture_conan::tests::test_crypto_sha_run();
}
