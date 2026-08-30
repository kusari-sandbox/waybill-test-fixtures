// waybill m669 benchmark fixture — test, module 19
#include "waybill-fixture-cmake-mod-19.h"
#include "detail.h"
int main() {
    return waybill_fixture_cmake_mod_19::compute() == (19 * 7 + 13) ? 0 : 1;
}
