// main.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_MAIN_HPP
#define WAYBILL_FIXTURE_CONAN_MAIN_HPP

#include <string>

namespace waybill_fixture_conan {

struct main_config_t {
    std::string name;
    int flags = 0;
};

struct main_result_t {
    int status;
    std::string tag;
    int version;
};

main_result_t main_init(const main_config_t& cfg);
int main_shutdown();

}  // namespace waybill_fixture_conan

#endif
