// formatter.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_FORMATTER_HPP
#define WAYBILL_FIXTURE_CONAN_FORMATTER_HPP

#include <string>

namespace waybill_fixture_conan {

struct formatter_config_t {
    std::string name;
    int flags = 0;
};

struct formatter_result_t {
    int status;
    std::string tag;
    int version;
};

formatter_result_t formatter_init(const formatter_config_t& cfg);
int formatter_shutdown();

}  // namespace waybill_fixture_conan

#endif
