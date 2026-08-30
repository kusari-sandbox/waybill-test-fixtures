// util_json.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_UTIL_JSON_HPP
#define WAYBILL_FIXTURE_CONAN_UTIL_JSON_HPP

#include <string>

namespace waybill_fixture_conan {

struct util_json_config_t {
    std::string name;
    int flags = 0;
};

struct util_json_result_t {
    int status;
    std::string tag;
    int version;
};

util_json_result_t util_json_init(const util_json_config_t& cfg);
int util_json_shutdown();

}  // namespace waybill_fixture_conan

#endif
