// waybill m669 benchmark fixture — test, module 05
#include "waybill-fixture-cmake-mod-05.h"
#include "detail.h"
int main() {
    return waybill_fixture_cmake_mod_05::compute() == (5 * 7 + 13) ? 0 : 1;
}
