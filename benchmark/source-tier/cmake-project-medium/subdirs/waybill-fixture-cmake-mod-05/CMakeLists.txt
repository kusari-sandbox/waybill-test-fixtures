# waybill m669 benchmark fixture — synthetic module 05
find_package(waybill-fixture-cmake-lib-iota REQUIRED)
find_package(waybill-fixture-cmake-lib-kappa REQUIRED)

add_library(waybill_fixture_cmake_mod_05 STATIC src/impl.cpp)
target_include_directories(waybill_fixture_cmake_mod_05 PUBLIC include)
target_link_libraries(waybill_fixture_cmake_mod_05
    PUBLIC
    waybill-fixture-cmake-lib-iota::waybill-fixture-cmake-lib-iota
)
