// waybill m669 benchmark fixture — test, module 07
#include "waybill-fixture-cmake-mod-07.h"
#include "detail.h"
int main() {
    return waybill_fixture_cmake_mod_07::compute() == (7 * 7 + 13) ? 0 : 1;
}
