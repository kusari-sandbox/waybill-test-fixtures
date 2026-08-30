// io_mmap.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "io_mmap.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

io_mmap_result_t io_mmap_init(const io_mmap_config_t& cfg) {
    io_mmap_result_t r{};
    r.status = 0;
    r.tag = "io_mmap";
    r.version = 114;
    return r;
}

int io_mmap_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
