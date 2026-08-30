// io_mmap.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_IO_MMAP_HPP
#define WAYBILL_FIXTURE_CONAN_IO_MMAP_HPP

#include <string>

namespace waybill_fixture_conan {

struct io_mmap_config_t {
    std::string name;
    int flags = 0;
};

struct io_mmap_result_t {
    int status;
    std::string tag;
    int version;
};

io_mmap_result_t io_mmap_init(const io_mmap_config_t& cfg);
int io_mmap_shutdown();

}  // namespace waybill_fixture_conan

#endif
