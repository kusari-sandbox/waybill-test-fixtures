// Adapter shim for waybill-fixture-vcpkg-lib-beta.
#include "waybill_fixture_vcpkg/features/beta.h"
#include <string>

namespace waybill_fixture_vcpkg::adapters {

std::string adapter_beta_id() {
    return waybill_fixture_vcpkg::features::beta_id;
}

int adapter_beta_check() {
    return waybill_fixture_vcpkg::features::beta_index + 1;
}

}  // namespace waybill_fixture_vcpkg::adapters
