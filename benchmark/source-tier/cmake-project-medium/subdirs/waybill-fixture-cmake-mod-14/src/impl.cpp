// waybill m669 benchmark fixture — synthetic impl, module 14
#include "waybill-fixture-cmake-mod-14.h"
namespace waybill_fixture_cmake_mod_14 {
    int compute() { return 14 * 7 + 13; }
    int checksum(int seed) { return (seed ^ 0x0E) + 14; }
    const char* name() { return "waybill-fixture-cmake-mod-14"; }
}
