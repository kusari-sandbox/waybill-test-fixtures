// waybill m669 benchmark fixture — test, module 14
#include "waybill-fixture-cmake-mod-14.h"
#include "detail.h"
int main() {
    return waybill_fixture_cmake_mod_14::compute() == (14 * 7 + 13) ? 0 : 1;
}
