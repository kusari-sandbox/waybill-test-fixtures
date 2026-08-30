// io_reader.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_IO_READER_HPP
#define WAYBILL_FIXTURE_CONAN_IO_READER_HPP

#include <string>

namespace waybill_fixture_conan {

struct io_reader_config_t {
    std::string name;
    int flags = 0;
};

struct io_reader_result_t {
    int status;
    std::string tag;
    int version;
};

io_reader_result_t io_reader_init(const io_reader_config_t& cfg);
int io_reader_shutdown();

}  // namespace waybill_fixture_conan

#endif
