// repository.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_REPOSITORY_HPP
#define WAYBILL_FIXTURE_CONAN_REPOSITORY_HPP

#include <string>

namespace waybill_fixture_conan {

struct repository_config_t {
    std::string name;
    int flags = 0;
};

struct repository_result_t {
    int status;
    std::string tag;
    int version;
};

repository_result_t repository_init(const repository_config_t& cfg);
int repository_shutdown();

}  // namespace waybill_fixture_conan

#endif
