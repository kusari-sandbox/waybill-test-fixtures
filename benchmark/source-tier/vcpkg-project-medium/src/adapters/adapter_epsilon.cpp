// Adapter shim for waybill-fixture-vcpkg-lib-epsilon.
#include "waybill_fixture_vcpkg/features/epsilon.h"
#include <string>

namespace waybill_fixture_vcpkg::adapters {

std::string adapter_epsilon_id() {
    return waybill_fixture_vcpkg::features::epsilon_id;
}

int adapter_epsilon_check() {
    return waybill_fixture_vcpkg::features::epsilon_index + 1;
}

}  // namespace waybill_fixture_vcpkg::adapters
