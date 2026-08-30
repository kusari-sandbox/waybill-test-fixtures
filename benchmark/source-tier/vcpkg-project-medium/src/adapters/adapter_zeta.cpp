// Adapter shim for waybill-fixture-vcpkg-lib-zeta.
#include "waybill_fixture_vcpkg/features/zeta.h"
#include <string>

namespace waybill_fixture_vcpkg::adapters {

std::string adapter_zeta_id() {
    return waybill_fixture_vcpkg::features::zeta_id;
}

int adapter_zeta_check() {
    return waybill_fixture_vcpkg::features::zeta_index + 1;
}

}  // namespace waybill_fixture_vcpkg::adapters
