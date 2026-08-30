// Adapter shim for waybill-fixture-vcpkg-lib-kappa.
#include "waybill_fixture_vcpkg/features/kappa.h"
#include <string>

namespace waybill_fixture_vcpkg::adapters {

std::string adapter_kappa_id() {
    return waybill_fixture_vcpkg::features::kappa_id;
}

int adapter_kappa_check() {
    return waybill_fixture_vcpkg::features::kappa_index + 1;
}

}  // namespace waybill_fixture_vcpkg::adapters
