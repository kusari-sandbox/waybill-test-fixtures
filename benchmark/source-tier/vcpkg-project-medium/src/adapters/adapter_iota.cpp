// Adapter shim for waybill-fixture-vcpkg-lib-iota.
#include "waybill_fixture_vcpkg/features/iota.h"
#include <string>

namespace waybill_fixture_vcpkg::adapters {

std::string adapter_iota_id() {
    return waybill_fixture_vcpkg::features::iota_id;
}

int adapter_iota_check() {
    return waybill_fixture_vcpkg::features::iota_index + 1;
}

}  // namespace waybill_fixture_vcpkg::adapters
