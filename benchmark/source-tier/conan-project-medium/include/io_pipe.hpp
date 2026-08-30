// io_pipe.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_IO_PIPE_HPP
#define WAYBILL_FIXTURE_CONAN_IO_PIPE_HPP

#include <string>

namespace waybill_fixture_conan {

struct io_pipe_config_t {
    std::string name;
    int flags = 0;
};

struct io_pipe_result_t {
    int status;
    std::string tag;
    int version;
};

io_pipe_result_t io_pipe_init(const io_pipe_config_t& cfg);
int io_pipe_shutdown();

}  // namespace waybill_fixture_conan

#endif
