// io_buffered.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "io_buffered.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

io_buffered_result_t io_buffered_init(const io_buffered_config_t& cfg) {
    io_buffered_result_t r{};
    r.status = 0;
    r.tag = "io_buffered";
    r.version = 119;
    return r;
}

int io_buffered_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
