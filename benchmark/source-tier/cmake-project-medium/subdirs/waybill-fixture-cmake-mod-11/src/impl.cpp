// waybill m669 benchmark fixture — synthetic impl, module 11
#include "waybill-fixture-cmake-mod-11.h"
namespace waybill_fixture_cmake_mod_11 {
    int compute() { return 11 * 7 + 13; }
    int checksum(int seed) { return (seed ^ 0x0B) + 11; }
    const char* name() { return "waybill-fixture-cmake-mod-11"; }
}
