// waybill m669 benchmark fixture — synthetic impl, module 15
#include "waybill-fixture-cmake-mod-15.h"
namespace waybill_fixture_cmake_mod_15 {
    int compute() { return 15 * 7 + 13; }
    int checksum(int seed) { return (seed ^ 0x0F) + 15; }
    const char* name() { return "waybill-fixture-cmake-mod-15"; }
}
