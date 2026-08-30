// io_flush.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "io_flush.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

io_flush_result_t io_flush_init(const io_flush_config_t& cfg) {
    io_flush_result_t r{};
    r.status = 0;
    r.tag = "io_flush";
    r.version = 118;
    return r;
}

int io_flush_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
