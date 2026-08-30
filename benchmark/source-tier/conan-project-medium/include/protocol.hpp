// protocol.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_PROTOCOL_HPP
#define WAYBILL_FIXTURE_CONAN_PROTOCOL_HPP

#include <string>

namespace waybill_fixture_conan {

struct protocol_config_t {
    std::string name;
    int flags = 0;
};

struct protocol_result_t {
    int status;
    std::string tag;
    int version;
};

protocol_result_t protocol_init(const protocol_config_t& cfg);
int protocol_shutdown();

}  // namespace waybill_fixture_conan

#endif
