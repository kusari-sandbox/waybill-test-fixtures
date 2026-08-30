#ifndef WAYBILL_FIXTURE_VCPKG_REGISTRY_H
#define WAYBILL_FIXTURE_VCPKG_REGISTRY_H
#include <string>
namespace waybill_fixture_vcpkg {
std::string registry_describe();
int registry_run(int seed);
}  // namespace waybill_fixture_vcpkg
#endif  // WAYBILL_FIXTURE_VCPKG_REGISTRY_H
