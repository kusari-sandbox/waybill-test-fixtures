# waybill m669 benchmark fixture — synthetic module 20
find_package(waybill-fixture-cmake-lib-zeta REQUIRED)
find_package(waybill-fixture-cmake-lib-eta REQUIRED)

add_library(waybill_fixture_cmake_mod_20 STATIC src/impl.cpp)
target_include_directories(waybill_fixture_cmake_mod_20 PUBLIC include)
target_link_libraries(waybill_fixture_cmake_mod_20
    PUBLIC
    waybill-fixture-cmake-lib-zeta::waybill-fixture-cmake-lib-zeta
)
