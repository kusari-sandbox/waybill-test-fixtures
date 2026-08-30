// waybill m669 benchmark fixture — test, module 01
#include "waybill-fixture-cmake-mod-01.h"
#include "detail.h"
int main() {
    return waybill_fixture_cmake_mod_01::compute() == (1 * 7 + 13) ? 0 : 1;
}
