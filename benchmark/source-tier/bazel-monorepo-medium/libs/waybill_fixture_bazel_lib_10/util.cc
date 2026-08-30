// waybill fixture: lib_10/util.cc
#include "util.h"

namespace waybill_fixture::lib_10 {

int util_sign(int x) {
    return x > 0 ? 1 : (x < 0 ? -1 : 0);
}

}  // namespace waybill_fixture::lib_10
