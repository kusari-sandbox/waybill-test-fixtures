// parser.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_PARSER_HPP
#define WAYBILL_FIXTURE_CONAN_PARSER_HPP

#include <string>

namespace waybill_fixture_conan {

struct parser_config_t {
    std::string name;
    int flags = 0;
};

struct parser_result_t {
    int status;
    std::string tag;
    int version;
};

parser_result_t parser_init(const parser_config_t& cfg);
int parser_shutdown();

}  // namespace waybill_fixture_conan

#endif
