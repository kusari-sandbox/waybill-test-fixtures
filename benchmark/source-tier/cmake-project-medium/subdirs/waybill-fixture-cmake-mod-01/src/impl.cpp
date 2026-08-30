// waybill m669 benchmark fixture — synthetic impl, module 01
#include "waybill-fixture-cmake-mod-01.h"
namespace waybill_fixture_cmake_mod_01 {
    int compute() { return 1 * 7 + 13; }
    int checksum(int seed) { return (seed ^ 0x01) + 1; }
    const char* name() { return "waybill-fixture-cmake-mod-01"; }
}
