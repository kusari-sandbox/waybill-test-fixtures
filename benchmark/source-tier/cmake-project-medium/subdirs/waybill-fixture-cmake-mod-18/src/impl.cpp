// waybill m669 benchmark fixture — synthetic impl, module 18
#include "waybill-fixture-cmake-mod-18.h"
namespace waybill_fixture_cmake_mod_18 {
    int compute() { return 18 * 7 + 13; }
    int checksum(int seed) { return (seed ^ 0x12) + 18; }
    const char* name() { return "waybill-fixture-cmake-mod-18"; }
}
