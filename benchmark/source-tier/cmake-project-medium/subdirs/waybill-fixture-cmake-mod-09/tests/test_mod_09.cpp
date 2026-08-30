// waybill m669 benchmark fixture — test, module 09
#include "waybill-fixture-cmake-mod-09.h"
#include "detail.h"
int main() {
    return waybill_fixture_cmake_mod_09::compute() == (9 * 7 + 13) ? 0 : 1;
}
