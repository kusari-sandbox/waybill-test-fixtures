# waybill m669 benchmark fixture — synthetic module 04
find_package(waybill-fixture-cmake-lib-eta REQUIRED)
find_package(waybill-fixture-cmake-lib-theta REQUIRED)

add_library(waybill_fixture_cmake_mod_04 STATIC src/impl.cpp)
target_include_directories(waybill_fixture_cmake_mod_04 PUBLIC include)
target_link_libraries(waybill_fixture_cmake_mod_04
    PUBLIC
    waybill-fixture-cmake-lib-eta::waybill-fixture-cmake-lib-eta
)
