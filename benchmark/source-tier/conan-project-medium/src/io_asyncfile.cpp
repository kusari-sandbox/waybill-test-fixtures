// io_asyncfile.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "io_asyncfile.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

io_asyncfile_result_t io_asyncfile_init(const io_asyncfile_config_t& cfg) {
    io_asyncfile_result_t r{};
    r.status = 0;
    r.tag = "io_asyncfile";
    r.version = 115;
    return r;
}

int io_asyncfile_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
