// io_buffered.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_IO_BUFFERED_HPP
#define WAYBILL_FIXTURE_CONAN_IO_BUFFERED_HPP

#include <string>

namespace waybill_fixture_conan {

struct io_buffered_config_t {
    std::string name;
    int flags = 0;
};

struct io_buffered_result_t {
    int status;
    std::string tag;
    int version;
};

io_buffered_result_t io_buffered_init(const io_buffered_config_t& cfg);
int io_buffered_shutdown();

}  // namespace waybill_fixture_conan

#endif
