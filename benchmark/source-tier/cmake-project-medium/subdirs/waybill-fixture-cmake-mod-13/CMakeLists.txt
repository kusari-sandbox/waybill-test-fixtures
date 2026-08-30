# waybill m669 benchmark fixture — synthetic module 13
find_package(waybill-fixture-cmake-lib-corvus REQUIRED)
find_package(waybill-fixture-cmake-lib-lyra REQUIRED)

add_library(waybill_fixture_cmake_mod_13 STATIC src/impl.cpp)
target_include_directories(waybill_fixture_cmake_mod_13 PUBLIC include)
target_link_libraries(waybill_fixture_cmake_mod_13
    PUBLIC
    waybill-fixture-cmake-lib-corvus::waybill-fixture-cmake-lib-corvus
)
