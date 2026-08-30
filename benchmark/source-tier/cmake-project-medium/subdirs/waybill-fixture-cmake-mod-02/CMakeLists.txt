# waybill m669 benchmark fixture — synthetic module 02
find_package(waybill-fixture-cmake-lib-gamma REQUIRED)
find_package(waybill-fixture-cmake-lib-delta REQUIRED)

add_library(waybill_fixture_cmake_mod_02 STATIC src/impl.cpp)
target_include_directories(waybill_fixture_cmake_mod_02 PUBLIC include)
target_link_libraries(waybill_fixture_cmake_mod_02
    PUBLIC
    waybill-fixture-cmake-lib-gamma::waybill-fixture-cmake-lib-gamma
)
