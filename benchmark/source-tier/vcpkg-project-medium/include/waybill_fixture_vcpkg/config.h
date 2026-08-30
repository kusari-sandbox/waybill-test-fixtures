#ifndef WAYBILL_FIXTURE_VCPKG_CONFIG_H
#define WAYBILL_FIXTURE_VCPKG_CONFIG_H
#include <string>
namespace waybill_fixture_vcpkg {
std::string config_describe();
int config_run(int seed);
}  // namespace waybill_fixture_vcpkg
#endif  // WAYBILL_FIXTURE_VCPKG_CONFIG_H
