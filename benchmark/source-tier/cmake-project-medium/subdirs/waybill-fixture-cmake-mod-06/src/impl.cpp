// waybill m669 benchmark fixture — synthetic impl, module 06
#include "waybill-fixture-cmake-mod-06.h"
namespace waybill_fixture_cmake_mod_06 {
    int compute() { return 6 * 7 + 13; }
    int checksum(int seed) { return (seed ^ 0x06) + 6; }
    const char* name() { return "waybill-fixture-cmake-mod-06"; }
}
