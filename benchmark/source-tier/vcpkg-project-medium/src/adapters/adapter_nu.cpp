// Adapter shim for waybill-fixture-vcpkg-lib-nu.
#include "waybill_fixture_vcpkg/features/nu.h"
#include <string>

namespace waybill_fixture_vcpkg::adapters {

std::string adapter_nu_id() {
    return waybill_fixture_vcpkg::features::nu_id;
}

int adapter_nu_check() {
    return waybill_fixture_vcpkg::features::nu_index + 1;
}

}  // namespace waybill_fixture_vcpkg::adapters
