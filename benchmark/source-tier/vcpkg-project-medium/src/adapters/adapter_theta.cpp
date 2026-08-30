// Adapter shim for waybill-fixture-vcpkg-lib-theta.
#include "waybill_fixture_vcpkg/features/theta.h"
#include <string>

namespace waybill_fixture_vcpkg::adapters {

std::string adapter_theta_id() {
    return waybill_fixture_vcpkg::features::theta_id;
}

int adapter_theta_check() {
    return waybill_fixture_vcpkg::features::theta_index + 1;
}

}  // namespace waybill_fixture_vcpkg::adapters
