// util_uuid.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_UTIL_UUID_HPP
#define WAYBILL_FIXTURE_CONAN_UTIL_UUID_HPP

#include <string>

namespace waybill_fixture_conan {

struct util_uuid_config_t {
    std::string name;
    int flags = 0;
};

struct util_uuid_result_t {
    int status;
    std::string tag;
    int version;
};

util_uuid_result_t util_uuid_init(const util_uuid_config_t& cfg);
int util_uuid_shutdown();

}  // namespace waybill_fixture_conan

#endif
