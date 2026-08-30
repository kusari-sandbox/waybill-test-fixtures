// waybill m669 benchmark fixture — test, module 06
#include "waybill-fixture-cmake-mod-06.h"
#include "detail.h"
int main() {
    return waybill_fixture_cmake_mod_06::compute() == (6 * 7 + 13) ? 0 : 1;
}
