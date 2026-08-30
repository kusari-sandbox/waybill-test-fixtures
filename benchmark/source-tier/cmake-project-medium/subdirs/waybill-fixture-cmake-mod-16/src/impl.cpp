// waybill m669 benchmark fixture — synthetic impl, module 16
#include "waybill-fixture-cmake-mod-16.h"
namespace waybill_fixture_cmake_mod_16 {
    int compute() { return 16 * 7 + 13; }
    int checksum(int seed) { return (seed ^ 0x10) + 16; }
    const char* name() { return "waybill-fixture-cmake-mod-16"; }
}
