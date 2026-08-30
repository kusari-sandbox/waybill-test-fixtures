cmake_minimum_required(VERSION 3.20)
project(waybill_fixture_conan LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(waybill-fixture-conan-lib-x CONFIG REQUIRED)
find_package(waybill-fixture-conan-lib-network CONFIG REQUIRED)
find_package(waybill-fixture-conan-lib-crypto CONFIG REQUIRED)

include_directories(${CMAKE_SOURCE_DIR}/include)

file(GLOB SOURCES "src/*.cpp")
add_executable(app ${SOURCES})

target_link_libraries(app PRIVATE
    waybill-fixture-conan-lib-x::waybill-fixture-conan-lib-x
    waybill-fixture-conan-lib-network::waybill-fixture-conan-lib-network
    waybill-fixture-conan-lib-crypto::waybill-fixture-conan-lib-crypto
)

enable_testing()
add_subdirectory(test)
