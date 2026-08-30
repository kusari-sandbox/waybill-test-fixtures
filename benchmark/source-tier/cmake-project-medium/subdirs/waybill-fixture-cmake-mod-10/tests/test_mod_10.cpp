// waybill m669 benchmark fixture — test, module 10
#include "waybill-fixture-cmake-mod-10.h"
#include "detail.h"
int main() {
    return waybill_fixture_cmake_mod_10::compute() == (10 * 7 + 13) ? 0 : 1;
}
