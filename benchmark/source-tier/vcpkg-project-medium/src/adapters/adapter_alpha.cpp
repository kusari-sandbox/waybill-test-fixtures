// Adapter shim for waybill-fixture-vcpkg-lib-alpha.
#include "waybill_fixture_vcpkg/features/alpha.h"
#include <string>

namespace waybill_fixture_vcpkg::adapters {

std::string adapter_alpha_id() {
    return waybill_fixture_vcpkg::features::alpha_id;
}

int adapter_alpha_check() {
    return waybill_fixture_vcpkg::features::alpha_index + 1;
}

}  // namespace waybill_fixture_vcpkg::adapters
