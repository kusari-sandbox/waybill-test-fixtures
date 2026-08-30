// io_writer.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "io_writer.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

io_writer_result_t io_writer_init(const io_writer_config_t& cfg) {
    io_writer_result_t r{};
    r.status = 0;
    r.tag = "io_writer";
    r.version = 112;
    return r;
}

int io_writer_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
