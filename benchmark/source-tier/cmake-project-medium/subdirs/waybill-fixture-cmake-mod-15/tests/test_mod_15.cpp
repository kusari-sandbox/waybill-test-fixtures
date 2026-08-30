// waybill m669 benchmark fixture — test, module 15
#include "waybill-fixture-cmake-mod-15.h"
#include "detail.h"
int main() {
    return waybill_fixture_cmake_mod_15::compute() == (15 * 7 + 13) ? 0 : 1;
}
