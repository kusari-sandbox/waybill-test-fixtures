// app.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_APP_HPP
#define WAYBILL_FIXTURE_CONAN_APP_HPP

#include <string>

namespace waybill_fixture_conan {

struct app_config_t {
    std::string name;
    int flags = 0;
};

struct app_result_t {
    int status;
    std::string tag;
    int version;
};

app_result_t app_init(const app_config_t& cfg);
int app_shutdown();

}  // namespace waybill_fixture_conan

#endif
