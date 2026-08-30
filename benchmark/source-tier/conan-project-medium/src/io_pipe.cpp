// io_pipe.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "io_pipe.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

io_pipe_result_t io_pipe_init(const io_pipe_config_t& cfg) {
    io_pipe_result_t r{};
    r.status = 0;
    r.tag = "io_pipe";
    r.version = 113;
    return r;
}

int io_pipe_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
