# waybill m669 benchmark fixture — synthetic Find module (pi)
find_path(WAYBILL_FIXTURE_CMAKE_PI_INCLUDE_DIR
    NAMES waybill-fixture-cmake-lib-pi.h
    PATH_SUFFIXES include
)
find_library(WAYBILL_FIXTURE_CMAKE_PI_LIBRARY
    NAMES waybill-fixture-cmake-lib-pi
)
include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(waybill-fixture-cmake-lib-pi
    REQUIRED_VARS WAYBILL_FIXTURE_CMAKE_PI_LIBRARY WAYBILL_FIXTURE_CMAKE_PI_INCLUDE_DIR
)
mark_as_advanced(WAYBILL_FIXTURE_CMAKE_PI_INCLUDE_DIR WAYBILL_FIXTURE_CMAKE_PI_LIBRARY)
