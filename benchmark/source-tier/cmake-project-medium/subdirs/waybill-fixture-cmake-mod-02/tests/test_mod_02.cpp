// waybill m669 benchmark fixture — test, module 02
#include "waybill-fixture-cmake-mod-02.h"
#include "detail.h"
int main() {
    return waybill_fixture_cmake_mod_02::compute() == (2 * 7 + 13) ? 0 : 1;
}
