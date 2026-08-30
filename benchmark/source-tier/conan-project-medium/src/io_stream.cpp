// io_stream.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "io_stream.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

io_stream_result_t io_stream_init(const io_stream_config_t& cfg) {
    io_stream_result_t r{};
    r.status = 0;
    r.tag = "io_stream";
    r.version = 110;
    return r;
}

int io_stream_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
