// error_codes.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_ERROR_CODES_HPP
#define WAYBILL_FIXTURE_CONAN_ERROR_CODES_HPP

#include <string>

namespace waybill_fixture_conan {

struct error_codes_config_t {
    std::string name;
    int flags = 0;
};

struct error_codes_result_t {
    int status;
    std::string tag;
    int version;
};

error_codes_result_t error_codes_init(const error_codes_config_t& cfg);
int error_codes_shutdown();

}  // namespace waybill_fixture_conan

#endif
