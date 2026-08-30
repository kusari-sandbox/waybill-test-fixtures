// waybill m669 benchmark fixture — synthetic impl, module 02
#include "waybill-fixture-cmake-mod-02.h"
namespace waybill_fixture_cmake_mod_02 {
    int compute() { return 2 * 7 + 13; }
    int checksum(int seed) { return (seed ^ 0x02) + 2; }
    const char* name() { return "waybill-fixture-cmake-mod-02"; }
}
