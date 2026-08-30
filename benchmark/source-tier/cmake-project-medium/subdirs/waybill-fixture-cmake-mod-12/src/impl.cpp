// waybill m669 benchmark fixture — synthetic impl, module 12
#include "waybill-fixture-cmake-mod-12.h"
namespace waybill_fixture_cmake_mod_12 {
    int compute() { return 12 * 7 + 13; }
    int checksum(int seed) { return (seed ^ 0x0C) + 12; }
    const char* name() { return "waybill-fixture-cmake-mod-12"; }
}
