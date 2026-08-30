// models.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_MODELS_HPP
#define WAYBILL_FIXTURE_CONAN_MODELS_HPP

#include <string>

namespace waybill_fixture_conan {

struct models_config_t {
    std::string name;
    int flags = 0;
};

struct models_result_t {
    int status;
    std::string tag;
    int version;
};

models_result_t models_init(const models_config_t& cfg);
int models_shutdown();

}  // namespace waybill_fixture_conan

#endif
