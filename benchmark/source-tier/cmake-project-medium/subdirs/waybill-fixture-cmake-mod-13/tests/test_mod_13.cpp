// waybill m669 benchmark fixture — test, module 13
#include "waybill-fixture-cmake-mod-13.h"
#include "detail.h"
int main() {
    return waybill_fixture_cmake_mod_13::compute() == (13 * 7 + 13) ? 0 : 1;
}
