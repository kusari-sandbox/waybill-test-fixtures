cmake_minimum_required(VERSION 3.20)
project(waybill_fixture_cmake_root VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

# waybill m669 benchmark fixture — synthetic find_package calls.
# All names are prefixed with waybill-fixture-cmake- and refer to
# nothing that exists in vcpkg, Conan, or any real registry.
find_package(waybill-fixture-cmake-lib-x 1.0 REQUIRED)
find_package(waybill-fixture-cmake-lib-y 2.1 REQUIRED)
find_package(waybill-fixture-cmake-lib-z 0.5 REQUIRED)
find_package(waybill-fixture-cmake-lib-alpha 1.2.3 REQUIRED)
find_package(waybill-fixture-cmake-lib-beta 0.9.0 REQUIRED)
find_package(waybill-fixture-cmake-lib-gamma 3.4.5 REQUIRED)
find_package(waybill-fixture-cmake-lib-delta 2.0.1 REQUIRED)
find_package(waybill-fixture-cmake-lib-epsilon 1.1.1 REQUIRED)
find_package(waybill-fixture-cmake-lib-zeta 0.5.7 REQUIRED)
find_package(waybill-fixture-cmake-lib-eta 4.2.0 REQUIRED)
find_package(waybill-fixture-cmake-lib-theta 1.7.3 REQUIRED)
find_package(waybill-fixture-cmake-lib-iota 2.3.1 REQUIRED)
find_package(waybill-fixture-cmake-lib-kappa 0.1.2 REQUIRED)
find_package(waybill-fixture-cmake-lib-lambda 5.6.7 REQUIRED)
find_package(waybill-fixture-cmake-lib-mu 3.1.0 REQUIRED)
find_package(waybill-fixture-cmake-lib-nu 1.4.4 REQUIRED)
find_package(waybill-fixture-cmake-lib-xi 2.2.2 REQUIRED)
find_package(waybill-fixture-cmake-lib-omicron 0.8.1 REQUIRED)
find_package(waybill-fixture-cmake-lib-pi 3.1.4 REQUIRED)
find_package(waybill-fixture-cmake-lib-rho 1.6.1 REQUIRED)
find_package(waybill-fixture-cmake-lib-sigma 2.7.1 REQUIRED)
find_package(waybill-fixture-cmake-lib-tau 6.2.8 REQUIRED)
find_package(waybill-fixture-cmake-lib-upsilon 1.0.5 REQUIRED)
find_package(waybill-fixture-cmake-lib-phi 1.6.1 REQUIRED)
find_package(waybill-fixture-cmake-lib-chi 0.4.4 REQUIRED)
find_package(waybill-fixture-cmake-lib-psi 2.5.0 REQUIRED)
find_package(waybill-fixture-cmake-lib-omega 3.0.0 REQUIRED)
find_package(waybill-fixture-cmake-lib-corvus 1.1.0 REQUIRED)
find_package(waybill-fixture-cmake-lib-lyra 0.7.2 REQUIRED)
find_package(waybill-fixture-cmake-lib-vega 2.8.4 REQUIRED)
find_package(waybill-fixture-cmake-lib-orion 1.3.7 REQUIRED)
find_package(waybill-fixture-cmake-lib-cygnus 0.6.6 REQUIRED)
find_package(waybill-fixture-cmake-lib-draco 4.4.4 REQUIRED)
find_package(waybill-fixture-cmake-lib-hydra 1.9.0 REQUIRED)
find_package(waybill-fixture-cmake-lib-pegasus 2.0.9 REQUIRED)
find_package(waybill-fixture-cmake-lib-phoenix 3.3.3 REQUIRED)

# Twenty synthetic in-tree modules exercise the subdir walker.
add_subdirectory(subdirs/waybill-fixture-cmake-mod-01)
add_subdirectory(subdirs/waybill-fixture-cmake-mod-02)
add_subdirectory(subdirs/waybill-fixture-cmake-mod-03)
add_subdirectory(subdirs/waybill-fixture-cmake-mod-04)
add_subdirectory(subdirs/waybill-fixture-cmake-mod-05)
add_subdirectory(subdirs/waybill-fixture-cmake-mod-06)
add_subdirectory(subdirs/waybill-fixture-cmake-mod-07)
add_subdirectory(subdirs/waybill-fixture-cmake-mod-08)
add_subdirectory(subdirs/waybill-fixture-cmake-mod-09)
add_subdirectory(subdirs/waybill-fixture-cmake-mod-10)
add_subdirectory(subdirs/waybill-fixture-cmake-mod-11)
add_subdirectory(subdirs/waybill-fixture-cmake-mod-12)
add_subdirectory(subdirs/waybill-fixture-cmake-mod-13)
add_subdirectory(subdirs/waybill-fixture-cmake-mod-14)
add_subdirectory(subdirs/waybill-fixture-cmake-mod-15)
add_subdirectory(subdirs/waybill-fixture-cmake-mod-16)
add_subdirectory(subdirs/waybill-fixture-cmake-mod-17)
add_subdirectory(subdirs/waybill-fixture-cmake-mod-18)
add_subdirectory(subdirs/waybill-fixture-cmake-mod-19)
add_subdirectory(subdirs/waybill-fixture-cmake-mod-20)

add_executable(waybill_fixture_cmake_app main.cpp)
target_link_libraries(waybill_fixture_cmake_app
    PRIVATE
    waybill-fixture-cmake-lib-x::waybill-fixture-cmake-lib-x
    waybill-fixture-cmake-lib-y::waybill-fixture-cmake-lib-y
    waybill-fixture-cmake-lib-z::waybill-fixture-cmake-lib-z
    waybill-fixture-cmake-lib-alpha::waybill-fixture-cmake-lib-alpha
    waybill-fixture-cmake-lib-beta::waybill-fixture-cmake-lib-beta
)
