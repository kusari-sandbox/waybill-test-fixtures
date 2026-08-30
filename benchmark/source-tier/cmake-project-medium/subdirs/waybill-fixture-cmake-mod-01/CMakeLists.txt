# waybill m669 benchmark fixture — synthetic module 01
find_package(waybill-fixture-cmake-lib-alpha REQUIRED)
find_package(waybill-fixture-cmake-lib-beta REQUIRED)

add_library(waybill_fixture_cmake_mod_01 STATIC src/impl.cpp)
target_include_directories(waybill_fixture_cmake_mod_01 PUBLIC include)
target_link_libraries(waybill_fixture_cmake_mod_01
    PUBLIC
    waybill-fixture-cmake-lib-alpha::waybill-fixture-cmake-lib-alpha
)
