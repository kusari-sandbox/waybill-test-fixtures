// codec.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_CODEC_HPP
#define WAYBILL_FIXTURE_CONAN_CODEC_HPP

#include <string>

namespace waybill_fixture_conan {

struct codec_config_t {
    std::string name;
    int flags = 0;
};

struct codec_result_t {
    int status;
    std::string tag;
    int version;
};

codec_result_t codec_init(const codec_config_t& cfg);
int codec_shutdown();

}  // namespace waybill_fixture_conan

#endif
