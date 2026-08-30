// Adapter shim for waybill-fixture-vcpkg-lib-mu.
#include "waybill_fixture_vcpkg/features/mu.h"
#include <string>

namespace waybill_fixture_vcpkg::adapters {

std::string adapter_mu_id() {
    return waybill_fixture_vcpkg::features::mu_id;
}

int adapter_mu_check() {
    return waybill_fixture_vcpkg::features::mu_index + 1;
}

}  // namespace waybill_fixture_vcpkg::adapters
