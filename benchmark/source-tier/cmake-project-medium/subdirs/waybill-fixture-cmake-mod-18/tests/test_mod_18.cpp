// waybill m669 benchmark fixture — test, module 18
#include "waybill-fixture-cmake-mod-18.h"
#include "detail.h"
int main() {
    return waybill_fixture_cmake_mod_18::compute() == (18 * 7 + 13) ? 0 : 1;
}
