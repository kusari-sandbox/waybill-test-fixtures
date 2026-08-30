# waybill m669 benchmark fixture — synthetic module 12
find_package(waybill-fixture-cmake-lib-psi REQUIRED)
find_package(waybill-fixture-cmake-lib-omega REQUIRED)

add_library(waybill_fixture_cmake_mod_12 STATIC src/impl.cpp)
target_include_directories(waybill_fixture_cmake_mod_12 PUBLIC include)
target_link_libraries(waybill_fixture_cmake_mod_12
    PUBLIC
    waybill-fixture-cmake-lib-psi::waybill-fixture-cmake-lib-psi
)
