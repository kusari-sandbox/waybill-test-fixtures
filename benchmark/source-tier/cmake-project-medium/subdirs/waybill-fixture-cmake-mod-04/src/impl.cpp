// waybill m669 benchmark fixture — synthetic impl, module 04
#include "waybill-fixture-cmake-mod-04.h"
namespace waybill_fixture_cmake_mod_04 {
    int compute() { return 4 * 7 + 13; }
    int checksum(int seed) { return (seed ^ 0x04) + 4; }
    const char* name() { return "waybill-fixture-cmake-mod-04"; }
}
