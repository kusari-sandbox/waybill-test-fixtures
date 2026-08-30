#ifndef WAYBILL_FIXTURE_VCPKG_VERSION_H
#define WAYBILL_FIXTURE_VCPKG_VERSION_H
#include <string>
namespace waybill_fixture_vcpkg {
std::string version_describe();
int version_run(int seed);
}  // namespace waybill_fixture_vcpkg
#endif  // WAYBILL_FIXTURE_VCPKG_VERSION_H
