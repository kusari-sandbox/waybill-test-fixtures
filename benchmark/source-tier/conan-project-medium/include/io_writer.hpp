// io_writer.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_IO_WRITER_HPP
#define WAYBILL_FIXTURE_CONAN_IO_WRITER_HPP

#include <string>

namespace waybill_fixture_conan {

struct io_writer_config_t {
    std::string name;
    int flags = 0;
};

struct io_writer_result_t {
    int status;
    std::string tag;
    int version;
};

io_writer_result_t io_writer_init(const io_writer_config_t& cfg);
int io_writer_shutdown();

}  // namespace waybill_fixture_conan

#endif
