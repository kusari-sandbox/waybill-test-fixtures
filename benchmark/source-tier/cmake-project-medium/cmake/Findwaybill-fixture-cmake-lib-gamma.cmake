# waybill m669 benchmark fixture — synthetic Find module (gamma)
find_path(WAYBILL_FIXTURE_CMAKE_GAMMA_INCLUDE_DIR
    NAMES waybill-fixture-cmake-lib-gamma.h
    PATH_SUFFIXES include
)
find_library(WAYBILL_FIXTURE_CMAKE_GAMMA_LIBRARY
    NAMES waybill-fixture-cmake-lib-gamma
)
include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(waybill-fixture-cmake-lib-gamma
    REQUIRED_VARS WAYBILL_FIXTURE_CMAKE_GAMMA_LIBRARY WAYBILL_FIXTURE_CMAKE_GAMMA_INCLUDE_DIR
)
mark_as_advanced(WAYBILL_FIXTURE_CMAKE_GAMMA_INCLUDE_DIR WAYBILL_FIXTURE_CMAKE_GAMMA_LIBRARY)
