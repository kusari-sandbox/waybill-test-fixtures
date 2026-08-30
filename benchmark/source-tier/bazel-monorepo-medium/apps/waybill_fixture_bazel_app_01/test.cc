// waybill fixture: app_01/test.cc
#include "handler.h"

int main() {
    return waybill_fixture::app_01::run() == 0 ? 0 : 1;
}
