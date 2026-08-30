// waybill m669 benchmark fixture — test, module 11
#include "waybill-fixture-cmake-mod-11.h"
#include "detail.h"
int main() {
    return waybill_fixture_cmake_mod_11::compute() == (11 * 7 + 13) ? 0 : 1;
}
