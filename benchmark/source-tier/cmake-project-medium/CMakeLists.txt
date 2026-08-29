cmake_minimum_required(VERSION 3.20)
project(waybill_fixture_cmake_root VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

find_package(waybill-fixture-cmake-lib-x 1.0 REQUIRED)
find_package(waybill-fixture-cmake-lib-y 2.1 REQUIRED)
find_package(waybill-fixture-cmake-lib-z 0.5 REQUIRED)

add_executable(waybill_fixture_cmake_app main.cpp)
target_link_libraries(waybill_fixture_cmake_app
    PRIVATE
    waybill-fixture-cmake-lib-x::waybill-fixture-cmake-lib-x
    waybill-fixture-cmake-lib-y::waybill-fixture-cmake-lib-y
    waybill-fixture-cmake-lib-z::waybill-fixture-cmake-lib-z
)
