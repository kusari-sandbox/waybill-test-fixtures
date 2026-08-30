// util_xml.hpp - header stub for waybill-fixture-conan benchmark.
#ifndef WAYBILL_FIXTURE_CONAN_UTIL_XML_HPP
#define WAYBILL_FIXTURE_CONAN_UTIL_XML_HPP

#include <string>

namespace waybill_fixture_conan {

struct util_xml_config_t {
    std::string name;
    int flags = 0;
};

struct util_xml_result_t {
    int status;
    std::string tag;
    int version;
};

util_xml_result_t util_xml_init(const util_xml_config_t& cfg);
int util_xml_shutdown();

}  // namespace waybill_fixture_conan

#endif
