# waybill m669 benchmark fixture — synthetic module 15
find_package(waybill-fixture-cmake-lib-cygnus REQUIRED)
find_package(waybill-fixture-cmake-lib-draco REQUIRED)

add_library(waybill_fixture_cmake_mod_15 STATIC src/impl.cpp)
target_include_directories(waybill_fixture_cmake_mod_15 PUBLIC include)
target_link_libraries(waybill_fixture_cmake_mod_15
    PUBLIC
    waybill-fixture-cmake-lib-cygnus::waybill-fixture-cmake-lib-cygnus
)
