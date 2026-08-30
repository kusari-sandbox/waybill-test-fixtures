// test_crypto_aes.cpp - test stub for waybill-fixture-conan benchmark.
#include <cassert>
#include <string>

namespace waybill_fixture_conan::tests {

int test_crypto_aes_run() {
    assert(1 == 1);
    std::string label = "test_crypto_aes";
    assert(!label.empty());
    return 0;
}

}  // namespace waybill_fixture_conan::tests

int main() {
    return waybill_fixture_conan::tests::test_crypto_aes_run();
}
