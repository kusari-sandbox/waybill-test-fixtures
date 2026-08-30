# waybill m669 benchmark fixture — synthetic module 06
find_package(waybill-fixture-cmake-lib-lambda REQUIRED)
find_package(waybill-fixture-cmake-lib-mu REQUIRED)

add_library(waybill_fixture_cmake_mod_06 STATIC src/impl.cpp)
target_include_directories(waybill_fixture_cmake_mod_06 PUBLIC include)
target_link_libraries(waybill_fixture_cmake_mod_06
    PUBLIC
    waybill-fixture-cmake-lib-lambda::waybill-fixture-cmake-lib-lambda
)
