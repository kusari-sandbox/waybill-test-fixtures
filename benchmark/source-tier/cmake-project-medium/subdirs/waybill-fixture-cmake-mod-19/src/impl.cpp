// waybill m669 benchmark fixture — synthetic impl, module 19
#include "waybill-fixture-cmake-mod-19.h"
namespace waybill_fixture_cmake_mod_19 {
    int compute() { return 19 * 7 + 13; }
    int checksum(int seed) { return (seed ^ 0x13) + 19; }
    const char* name() { return "waybill-fixture-cmake-mod-19"; }
}
