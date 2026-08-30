// io_seek.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "io_seek.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

io_seek_result_t io_seek_init(const io_seek_config_t& cfg) {
    io_seek_result_t r{};
    r.status = 0;
    r.tag = "io_seek";
    r.version = 116;
    return r;
}

int io_seek_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
