#ifndef WAYBILL_FIXTURE_VCPKG_SCHEDULER_H
#define WAYBILL_FIXTURE_VCPKG_SCHEDULER_H
#include <string>
namespace waybill_fixture_vcpkg {
std::string scheduler_describe();
int scheduler_run(int seed);
}  // namespace waybill_fixture_vcpkg
#endif  // WAYBILL_FIXTURE_VCPKG_SCHEDULER_H
