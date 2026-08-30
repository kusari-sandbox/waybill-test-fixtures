# waybill m669 benchmark fixture — synthetic module 16
find_package(waybill-fixture-cmake-lib-hydra REQUIRED)
find_package(waybill-fixture-cmake-lib-pegasus REQUIRED)

add_library(waybill_fixture_cmake_mod_16 STATIC src/impl.cpp)
target_include_directories(waybill_fixture_cmake_mod_16 PUBLIC include)
target_link_libraries(waybill_fixture_cmake_mod_16
    PUBLIC
    waybill-fixture-cmake-lib-hydra::waybill-fixture-cmake-lib-hydra
)
