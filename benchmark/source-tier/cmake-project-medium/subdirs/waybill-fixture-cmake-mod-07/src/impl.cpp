// waybill m669 benchmark fixture — synthetic impl, module 07
#include "waybill-fixture-cmake-mod-07.h"
namespace waybill_fixture_cmake_mod_07 {
    int compute() { return 7 * 7 + 13; }
    int checksum(int seed) { return (seed ^ 0x07) + 7; }
    const char* name() { return "waybill-fixture-cmake-mod-07"; }
}
