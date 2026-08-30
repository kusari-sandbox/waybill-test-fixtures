// io_flush.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_IO_FLUSH_HPP
#define WAYBILL_FIXTURE_CONAN_IO_FLUSH_HPP

#include <string>

namespace waybill_fixture_conan {

struct io_flush_config_t {
    std::string name;
    int flags = 0;
};

struct io_flush_result_t {
    int status;
    std::string tag;
    int version;
};

io_flush_result_t io_flush_init(const io_flush_config_t& cfg);
int io_flush_shutdown();

}  // namespace waybill_fixture_conan

#endif
