// waybill m669 benchmark fixture — synthetic impl, module 20
#include "waybill-fixture-cmake-mod-20.h"
namespace waybill_fixture_cmake_mod_20 {
    int compute() { return 20 * 7 + 13; }
    int checksum(int seed) { return (seed ^ 0x14) + 20; }
    const char* name() { return "waybill-fixture-cmake-mod-20"; }
}
