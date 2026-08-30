// buffer.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_BUFFER_HPP
#define WAYBILL_FIXTURE_CONAN_BUFFER_HPP

#include <string>

namespace waybill_fixture_conan {

struct buffer_config_t {
    std::string name;
    int flags = 0;
};

struct buffer_result_t {
    int status;
    std::string tag;
    int version;
};

buffer_result_t buffer_init(const buffer_config_t& cfg);
int buffer_shutdown();

}  // namespace waybill_fixture_conan

#endif
