// Adapter shim for waybill-fixture-vcpkg-lib-lambda.
#include "waybill_fixture_vcpkg/features/lambda.h"
#include <string>

namespace waybill_fixture_vcpkg::adapters {

std::string adapter_lambda_id() {
    return waybill_fixture_vcpkg::features::lambda_id;
}

int adapter_lambda_check() {
    return waybill_fixture_vcpkg::features::lambda_index + 1;
}

}  // namespace waybill_fixture_vcpkg::adapters
