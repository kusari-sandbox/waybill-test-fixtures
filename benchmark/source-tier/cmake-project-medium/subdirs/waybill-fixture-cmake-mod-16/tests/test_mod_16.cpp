// waybill m669 benchmark fixture — test, module 16
#include "waybill-fixture-cmake-mod-16.h"
#include "detail.h"
int main() {
    return waybill_fixture_cmake_mod_16::compute() == (16 * 7 + 13) ? 0 : 1;
}
