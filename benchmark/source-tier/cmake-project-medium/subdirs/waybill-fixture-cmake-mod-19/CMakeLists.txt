# waybill m669 benchmark fixture — synthetic module 19
find_package(waybill-fixture-cmake-lib-delta REQUIRED)
find_package(waybill-fixture-cmake-lib-epsilon REQUIRED)

add_library(waybill_fixture_cmake_mod_19 STATIC src/impl.cpp)
target_include_directories(waybill_fixture_cmake_mod_19 PUBLIC include)
target_link_libraries(waybill_fixture_cmake_mod_19
    PUBLIC
    waybill-fixture-cmake-lib-delta::waybill-fixture-cmake-lib-delta
)
