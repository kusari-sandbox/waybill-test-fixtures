// waybill m669 benchmark fixture — test, module 03
#include "waybill-fixture-cmake-mod-03.h"
#include "detail.h"
int main() {
    return waybill_fixture_cmake_mod_03::compute() == (3 * 7 + 13) ? 0 : 1;
}
