#include "waybill_fixture_vcpkg/util.h"
#include <cassert>
int main() {
    assert(waybill_fixture_vcpkg::util_run(3) == 3);
    return 0;
}
