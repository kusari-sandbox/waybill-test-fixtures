// waybill m669 benchmark fixture — synthetic impl, module 17
#include "waybill-fixture-cmake-mod-17.h"
namespace waybill_fixture_cmake_mod_17 {
    int compute() { return 17 * 7 + 13; }
    int checksum(int seed) { return (seed ^ 0x11) + 17; }
    const char* name() { return "waybill-fixture-cmake-mod-17"; }
}
