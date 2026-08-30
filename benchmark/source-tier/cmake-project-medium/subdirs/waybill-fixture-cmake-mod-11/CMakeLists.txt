# waybill m669 benchmark fixture — synthetic module 11
find_package(waybill-fixture-cmake-lib-phi REQUIRED)
find_package(waybill-fixture-cmake-lib-chi REQUIRED)

add_library(waybill_fixture_cmake_mod_11 STATIC src/impl.cpp)
target_include_directories(waybill_fixture_cmake_mod_11 PUBLIC include)
target_link_libraries(waybill_fixture_cmake_mod_11
    PUBLIC
    waybill-fixture-cmake-lib-phi::waybill-fixture-cmake-lib-phi
)
