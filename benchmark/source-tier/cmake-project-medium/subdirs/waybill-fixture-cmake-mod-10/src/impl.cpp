// waybill m669 benchmark fixture — synthetic impl, module 10
#include "waybill-fixture-cmake-mod-10.h"
namespace waybill_fixture_cmake_mod_10 {
    int compute() { return 10 * 7 + 13; }
    int checksum(int seed) { return (seed ^ 0x0A) + 10; }
    const char* name() { return "waybill-fixture-cmake-mod-10"; }
}
