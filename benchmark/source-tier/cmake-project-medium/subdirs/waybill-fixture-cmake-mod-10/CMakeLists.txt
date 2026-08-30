# waybill m669 benchmark fixture — synthetic module 10
find_package(waybill-fixture-cmake-lib-tau REQUIRED)
find_package(waybill-fixture-cmake-lib-upsilon REQUIRED)

add_library(waybill_fixture_cmake_mod_10 STATIC src/impl.cpp)
target_include_directories(waybill_fixture_cmake_mod_10 PUBLIC include)
target_link_libraries(waybill_fixture_cmake_mod_10
    PUBLIC
    waybill-fixture-cmake-lib-tau::waybill-fixture-cmake-lib-tau
)
