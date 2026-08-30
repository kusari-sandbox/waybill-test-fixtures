// waybill m669 benchmark fixture — test, module 08
#include "waybill-fixture-cmake-mod-08.h"
#include "detail.h"
int main() {
    return waybill_fixture_cmake_mod_08::compute() == (8 * 7 + 13) ? 0 : 1;
}
