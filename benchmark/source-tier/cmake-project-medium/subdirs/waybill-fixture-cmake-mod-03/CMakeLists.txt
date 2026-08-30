# waybill m669 benchmark fixture — synthetic module 03
find_package(waybill-fixture-cmake-lib-epsilon REQUIRED)
find_package(waybill-fixture-cmake-lib-zeta REQUIRED)

add_library(waybill_fixture_cmake_mod_03 STATIC src/impl.cpp)
target_include_directories(waybill_fixture_cmake_mod_03 PUBLIC include)
target_link_libraries(waybill_fixture_cmake_mod_03
    PUBLIC
    waybill-fixture-cmake-lib-epsilon::waybill-fixture-cmake-lib-epsilon
)
