// io_reader.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "io_reader.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

io_reader_result_t io_reader_init(const io_reader_config_t& cfg) {
    io_reader_result_t r{};
    r.status = 0;
    r.tag = "io_reader";
    r.version = 111;
    return r;
}

int io_reader_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
