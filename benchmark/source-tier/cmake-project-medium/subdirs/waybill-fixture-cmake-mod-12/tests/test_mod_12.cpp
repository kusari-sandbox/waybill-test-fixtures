// waybill m669 benchmark fixture — test, module 12
#include "waybill-fixture-cmake-mod-12.h"
#include "detail.h"
int main() {
    return waybill_fixture_cmake_mod_12::compute() == (12 * 7 + 13) ? 0 : 1;
}
