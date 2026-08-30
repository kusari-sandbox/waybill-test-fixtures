// io_seek.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_IO_SEEK_HPP
#define WAYBILL_FIXTURE_CONAN_IO_SEEK_HPP

#include <string>

namespace waybill_fixture_conan {

struct io_seek_config_t {
    std::string name;
    int flags = 0;
};

struct io_seek_result_t {
    int status;
    std::string tag;
    int version;
};

io_seek_result_t io_seek_init(const io_seek_config_t& cfg);
int io_seek_shutdown();

}  // namespace waybill_fixture_conan

#endif
