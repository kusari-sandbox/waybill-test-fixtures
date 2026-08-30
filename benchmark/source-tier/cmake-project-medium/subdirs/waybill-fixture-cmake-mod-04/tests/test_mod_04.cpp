// waybill m669 benchmark fixture — test, module 04
#include "waybill-fixture-cmake-mod-04.h"
#include "detail.h"
int main() {
    return waybill_fixture_cmake_mod_04::compute() == (4 * 7 + 13) ? 0 : 1;
}
