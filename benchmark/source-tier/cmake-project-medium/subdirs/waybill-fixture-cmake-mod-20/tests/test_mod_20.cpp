// waybill m669 benchmark fixture — test, module 20
#include "waybill-fixture-cmake-mod-20.h"
#include "detail.h"
int main() {
    return waybill_fixture_cmake_mod_20::compute() == (20 * 7 + 13) ? 0 : 1;
}
