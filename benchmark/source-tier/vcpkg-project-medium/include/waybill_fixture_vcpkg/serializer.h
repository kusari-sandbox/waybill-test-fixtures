#ifndef WAYBILL_FIXTURE_VCPKG_SERIALIZER_H
#define WAYBILL_FIXTURE_VCPKG_SERIALIZER_H
#include <string>
namespace waybill_fixture_vcpkg {
std::string serializer_describe();
int serializer_run(int seed);
}  // namespace waybill_fixture_vcpkg
#endif  // WAYBILL_FIXTURE_VCPKG_SERIALIZER_H
