// io_stream.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_IO_STREAM_HPP
#define WAYBILL_FIXTURE_CONAN_IO_STREAM_HPP

#include <string>

namespace waybill_fixture_conan {

struct io_stream_config_t {
    std::string name;
    int flags = 0;
};

struct io_stream_result_t {
    int status;
    std::string tag;
    int version;
};

io_stream_result_t io_stream_init(const io_stream_config_t& cfg);
int io_stream_shutdown();

}  // namespace waybill_fixture_conan

#endif
