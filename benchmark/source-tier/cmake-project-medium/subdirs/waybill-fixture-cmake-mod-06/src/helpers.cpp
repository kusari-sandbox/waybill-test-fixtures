// waybill m669 benchmark fixture — helpers, module 06
#include "detail.h"
namespace waybill_fixture_cmake_mod_06::detail {
    int mix(int a, int b) { return (a * 31) ^ (b + 17); }
    int rotate(int v, int shift) { return (v << shift) | (v >> (32 - shift)); }
}
