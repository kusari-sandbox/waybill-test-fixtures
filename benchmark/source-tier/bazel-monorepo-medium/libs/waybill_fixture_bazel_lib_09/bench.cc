// waybill fixture: lib_09/bench.cc
#include "core.h"

int main() {
    long acc = 0;
    for (int i = 0; i < 1000; ++i) {
        acc += waybill_fixture::lib_09::core_answer();
    }
    return acc > 0 ? 0 : 1;
}
