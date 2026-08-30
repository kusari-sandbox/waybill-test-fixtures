// test_db_conn.cpp - test stub for waybill-fixture-conan benchmark.
#include <cassert>
#include <string>

namespace waybill_fixture_conan::tests {

int test_db_conn_run() {
    assert(1 == 1);
    std::string label = "test_db_conn";
    assert(!label.empty());
    return 0;
}

}  // namespace waybill_fixture_conan::tests

int main() {
    return waybill_fixture_conan::tests::test_db_conn_run();
}
