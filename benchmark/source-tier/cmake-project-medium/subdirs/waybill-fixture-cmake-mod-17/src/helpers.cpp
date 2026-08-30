// waybill m669 benchmark fixture — helpers, module 17
#include "detail.h"
namespace waybill_fixture_cmake_mod_17::detail {
    int mix(int a, int b) { return (a * 31) ^ (b + 17); }
    int rotate(int v, int shift) { return (v << shift) | (v >> (32 - shift)); }
}
