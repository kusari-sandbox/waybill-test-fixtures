#ifndef WAYBILL_FIXTURE_VCPKG_PIPELINE_H
#define WAYBILL_FIXTURE_VCPKG_PIPELINE_H
#include <string>
namespace waybill_fixture_vcpkg {
std::string pipeline_describe();
int pipeline_run(int seed);
}  // namespace waybill_fixture_vcpkg
#endif  // WAYBILL_FIXTURE_VCPKG_PIPELINE_H
