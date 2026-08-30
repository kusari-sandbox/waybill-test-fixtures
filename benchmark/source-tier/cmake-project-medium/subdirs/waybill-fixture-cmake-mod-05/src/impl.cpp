// waybill m669 benchmark fixture — synthetic impl, module 05
#include "waybill-fixture-cmake-mod-05.h"
namespace waybill_fixture_cmake_mod_05 {
    int compute() { return 5 * 7 + 13; }
    int checksum(int seed) { return (seed ^ 0x05) + 5; }
    const char* name() { return "waybill-fixture-cmake-mod-05"; }
}
