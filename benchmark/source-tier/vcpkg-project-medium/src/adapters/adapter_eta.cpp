// Adapter shim for waybill-fixture-vcpkg-lib-eta.
#include "waybill_fixture_vcpkg/features/eta.h"
#include <string>

namespace waybill_fixture_vcpkg::adapters {

std::string adapter_eta_id() {
    return waybill_fixture_vcpkg::features::eta_id;
}

int adapter_eta_check() {
    return waybill_fixture_vcpkg::features::eta_index + 1;
}

}  // namespace waybill_fixture_vcpkg::adapters
