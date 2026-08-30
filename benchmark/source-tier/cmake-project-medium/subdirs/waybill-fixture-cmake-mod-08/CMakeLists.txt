# waybill m669 benchmark fixture — synthetic module 08
find_package(waybill-fixture-cmake-lib-omicron REQUIRED)
find_package(waybill-fixture-cmake-lib-pi REQUIRED)

add_library(waybill_fixture_cmake_mod_08 STATIC src/impl.cpp)
target_include_directories(waybill_fixture_cmake_mod_08 PUBLIC include)
target_link_libraries(waybill_fixture_cmake_mod_08
    PUBLIC
    waybill-fixture-cmake-lib-omicron::waybill-fixture-cmake-lib-omicron
)
