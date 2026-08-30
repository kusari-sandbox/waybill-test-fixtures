// waybill m669 benchmark fixture — test, module 17
#include "waybill-fixture-cmake-mod-17.h"
#include "detail.h"
int main() {
    return waybill_fixture_cmake_mod_17::compute() == (17 * 7 + 13) ? 0 : 1;
}
