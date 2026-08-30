// waybill m669 benchmark fixture — synthetic impl, module 13
#include "waybill-fixture-cmake-mod-13.h"
namespace waybill_fixture_cmake_mod_13 {
    int compute() { return 13 * 7 + 13; }
    int checksum(int seed) { return (seed ^ 0x0D) + 13; }
    const char* name() { return "waybill-fixture-cmake-mod-13"; }
}
