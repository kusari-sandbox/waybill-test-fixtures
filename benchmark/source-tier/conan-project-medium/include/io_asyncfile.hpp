// io_asyncfile.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_IO_ASYNCFILE_HPP
#define WAYBILL_FIXTURE_CONAN_IO_ASYNCFILE_HPP

#include <string>

namespace waybill_fixture_conan {

struct io_asyncfile_config_t {
    std::string name;
    int flags = 0;
};

struct io_asyncfile_result_t {
    int status;
    std::string tag;
    int version;
};

io_asyncfile_result_t io_asyncfile_init(const io_asyncfile_config_t& cfg);
int io_asyncfile_shutdown();

}  // namespace waybill_fixture_conan

#endif
