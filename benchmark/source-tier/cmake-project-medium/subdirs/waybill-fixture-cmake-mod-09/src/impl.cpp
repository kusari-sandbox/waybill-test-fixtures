// waybill m669 benchmark fixture — synthetic impl, module 09
#include "waybill-fixture-cmake-mod-09.h"
namespace waybill_fixture_cmake_mod_09 {
    int compute() { return 9 * 7 + 13; }
    int checksum(int seed) { return (seed ^ 0x09) + 9; }
    const char* name() { return "waybill-fixture-cmake-mod-09"; }
}
