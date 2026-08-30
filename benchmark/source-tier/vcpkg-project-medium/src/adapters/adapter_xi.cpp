// Adapter shim for waybill-fixture-vcpkg-lib-xi.
#include "waybill_fixture_vcpkg/features/xi.h"
#include <string>

namespace waybill_fixture_vcpkg::adapters {

std::string adapter_xi_id() {
    return waybill_fixture_vcpkg::features::xi_id;
}

int adapter_xi_check() {
    return waybill_fixture_vcpkg::features::xi_index + 1;
}

}  // namespace waybill_fixture_vcpkg::adapters
