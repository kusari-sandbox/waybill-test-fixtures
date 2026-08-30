# waybill m669 benchmark fixture — synthetic module 09
find_package(waybill-fixture-cmake-lib-rho REQUIRED)
find_package(waybill-fixture-cmake-lib-sigma REQUIRED)

add_library(waybill_fixture_cmake_mod_09 STATIC src/impl.cpp)
target_include_directories(waybill_fixture_cmake_mod_09 PUBLIC include)
target_link_libraries(waybill_fixture_cmake_mod_09
    PUBLIC
    waybill-fixture-cmake-lib-rho::waybill-fixture-cmake-lib-rho
)
