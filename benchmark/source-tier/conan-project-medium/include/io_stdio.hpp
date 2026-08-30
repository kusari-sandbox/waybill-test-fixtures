// io_stdio.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_IO_STDIO_HPP
#define WAYBILL_FIXTURE_CONAN_IO_STDIO_HPP

#include <string>

namespace waybill_fixture_conan {

struct io_stdio_config_t {
    std::string name;
    int flags = 0;
};

struct io_stdio_result_t {
    int status;
    std::string tag;
    int version;
};

io_stdio_result_t io_stdio_init(const io_stdio_config_t& cfg);
int io_stdio_shutdown();

}  // namespace waybill_fixture_conan

#endif
