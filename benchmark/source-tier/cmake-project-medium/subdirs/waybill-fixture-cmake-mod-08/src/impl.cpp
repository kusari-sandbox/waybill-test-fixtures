// waybill m669 benchmark fixture — synthetic impl, module 08
#include "waybill-fixture-cmake-mod-08.h"
namespace waybill_fixture_cmake_mod_08 {
    int compute() { return 8 * 7 + 13; }
    int checksum(int seed) { return (seed ^ 0x08) + 8; }
    const char* name() { return "waybill-fixture-cmake-mod-08"; }
}
