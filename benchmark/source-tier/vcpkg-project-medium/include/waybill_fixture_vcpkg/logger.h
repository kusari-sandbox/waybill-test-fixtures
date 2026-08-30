#ifndef WAYBILL_FIXTURE_VCPKG_LOGGER_H
#define WAYBILL_FIXTURE_VCPKG_LOGGER_H
#include <string>
namespace waybill_fixture_vcpkg {
std::string logger_describe();
int logger_run(int seed);
}  // namespace waybill_fixture_vcpkg
#endif  // WAYBILL_FIXTURE_VCPKG_LOGGER_H
