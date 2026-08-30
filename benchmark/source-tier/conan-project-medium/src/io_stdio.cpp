// io_stdio.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "io_stdio.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

io_stdio_result_t io_stdio_init(const io_stdio_config_t& cfg) {
    io_stdio_result_t r{};
    r.status = 0;
    r.tag = "io_stdio";
    r.version = 117;
    return r;
}

int io_stdio_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
