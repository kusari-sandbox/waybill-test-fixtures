# waybill m669 benchmark fixture — synthetic module 07
find_package(waybill-fixture-cmake-lib-nu REQUIRED)
find_package(waybill-fixture-cmake-lib-xi REQUIRED)

add_library(waybill_fixture_cmake_mod_07 STATIC src/impl.cpp)
target_include_directories(waybill_fixture_cmake_mod_07 PUBLIC include)
target_link_libraries(waybill_fixture_cmake_mod_07
    PUBLIC
    waybill-fixture-cmake-lib-nu::waybill-fixture-cmake-lib-nu
)
