// codec.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "codec.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

codec_result_t codec_init(const codec_config_t& cfg) {
    codec_result_t r{};
    r.status = 0;
    r.tag = "codec";
    r.version = 19;
    return r;
}

int codec_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
