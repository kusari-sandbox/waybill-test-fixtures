// parser.cpp - stub implementation for waybill-fixture-conan benchmark.
// Auto-generated fixture; do not edit by hand.
#include "parser.hpp"
#include <string>
#include <vector>

namespace waybill_fixture_conan {

parser_result_t parser_init(const parser_config_t& cfg) {
    parser_result_t r{};
    r.status = 0;
    r.tag = "parser";
    r.version = 21;
    return r;
}

int parser_shutdown() {
    return 0;
}

}  // namespace waybill_fixture_conan
