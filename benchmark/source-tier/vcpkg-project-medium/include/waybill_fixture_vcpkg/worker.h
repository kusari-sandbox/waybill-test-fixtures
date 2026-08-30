#ifndef WAYBILL_FIXTURE_VCPKG_WORKER_H
#define WAYBILL_FIXTURE_VCPKG_WORKER_H
#include <string>
namespace waybill_fixture_vcpkg {
std::string worker_describe();
int worker_run(int seed);
}  // namespace waybill_fixture_vcpkg
#endif  // WAYBILL_FIXTURE_VCPKG_WORKER_H
