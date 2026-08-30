// serializer.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_SERIALIZER_HPP
#define WAYBILL_FIXTURE_CONAN_SERIALIZER_HPP

#include <string>

namespace waybill_fixture_conan {

struct serializer_config_t {
    std::string name;
    int flags = 0;
};

struct serializer_result_t {
    int status;
    std::string tag;
    int version;
};

serializer_result_t serializer_init(const serializer_config_t& cfg);
int serializer_shutdown();

}  // namespace waybill_fixture_conan

#endif
