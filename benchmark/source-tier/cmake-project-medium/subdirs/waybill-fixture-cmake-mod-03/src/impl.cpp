// waybill m669 benchmark fixture — synthetic impl, module 03
#include "waybill-fixture-cmake-mod-03.h"
namespace waybill_fixture_cmake_mod_03 {
    int compute() { return 3 * 7 + 13; }
    int checksum(int seed) { return (seed ^ 0x03) + 3; }
    const char* name() { return "waybill-fixture-cmake-mod-03"; }
}
