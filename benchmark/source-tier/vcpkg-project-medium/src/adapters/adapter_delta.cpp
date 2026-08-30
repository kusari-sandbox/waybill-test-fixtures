// Adapter shim for waybill-fixture-vcpkg-lib-delta.
#include "waybill_fixture_vcpkg/features/delta.h"
#include <string>

namespace waybill_fixture_vcpkg::adapters {

std::string adapter_delta_id() {
    return waybill_fixture_vcpkg::features::delta_id;
}

int adapter_delta_check() {
    return waybill_fixture_vcpkg::features::delta_index + 1;
}

}  // namespace waybill_fixture_vcpkg::adapters
