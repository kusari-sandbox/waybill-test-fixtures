// Adapter shim for waybill-fixture-vcpkg-lib-gamma.
#include "waybill_fixture_vcpkg/features/gamma.h"
#include <string>

namespace waybill_fixture_vcpkg::adapters {

std::string adapter_gamma_id() {
    return waybill_fixture_vcpkg::features::gamma_id;
}

int adapter_gamma_check() {
    return waybill_fixture_vcpkg::features::gamma_index + 1;
}

}  // namespace waybill_fixture_vcpkg::adapters
