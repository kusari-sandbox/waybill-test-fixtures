# waybill m669 benchmark fixture — synthetic module 17
find_package(waybill-fixture-cmake-lib-phoenix REQUIRED)
find_package(waybill-fixture-cmake-lib-alpha REQUIRED)

add_library(waybill_fixture_cmake_mod_17 STATIC src/impl.cpp)
target_include_directories(waybill_fixture_cmake_mod_17 PUBLIC include)
target_link_libraries(waybill_fixture_cmake_mod_17
    PUBLIC
    waybill-fixture-cmake-lib-phoenix::waybill-fixture-cmake-lib-phoenix
)
