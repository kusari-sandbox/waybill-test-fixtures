// Adapter shim for waybill-fixture-vcpkg-lib-omicron.
#include "waybill_fixture_vcpkg/features/omicron.h"
#include <string>

namespace waybill_fixture_vcpkg::adapters {

std::string adapter_omicron_id() {
    return waybill_fixture_vcpkg::features::omicron_id;
}

int adapter_omicron_check() {
    return waybill_fixture_vcpkg::features::omicron_index + 1;
}

}  // namespace waybill_fixture_vcpkg::adapters
