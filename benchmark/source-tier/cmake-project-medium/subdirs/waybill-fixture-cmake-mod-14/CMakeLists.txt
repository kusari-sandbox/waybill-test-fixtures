# waybill m669 benchmark fixture — synthetic module 14
find_package(waybill-fixture-cmake-lib-vega REQUIRED)
find_package(waybill-fixture-cmake-lib-orion REQUIRED)

add_library(waybill_fixture_cmake_mod_14 STATIC src/impl.cpp)
target_include_directories(waybill_fixture_cmake_mod_14 PUBLIC include)
target_link_libraries(waybill_fixture_cmake_mod_14
    PUBLIC
    waybill-fixture-cmake-lib-vega::waybill-fixture-cmake-lib-vega
)
