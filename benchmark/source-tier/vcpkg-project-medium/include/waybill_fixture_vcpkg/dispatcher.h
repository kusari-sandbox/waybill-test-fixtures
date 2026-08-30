#ifndef WAYBILL_FIXTURE_VCPKG_DISPATCHER_H
#define WAYBILL_FIXTURE_VCPKG_DISPATCHER_H
#include <string>
namespace waybill_fixture_vcpkg {
std::string dispatcher_describe();
int dispatcher_run(int seed);
}  // namespace waybill_fixture_vcpkg
#endif  // WAYBILL_FIXTURE_VCPKG_DISPATCHER_H
