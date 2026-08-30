# waybill m669 benchmark fixture — synthetic Find module (theta)
find_path(WAYBILL_FIXTURE_CMAKE_THETA_INCLUDE_DIR
    NAMES waybill-fixture-cmake-lib-theta.h
    PATH_SUFFIXES include
)
find_library(WAYBILL_FIXTURE_CMAKE_THETA_LIBRARY
    NAMES waybill-fixture-cmake-lib-theta
)
include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(waybill-fixture-cmake-lib-theta
    REQUIRED_VARS WAYBILL_FIXTURE_CMAKE_THETA_LIBRARY WAYBILL_FIXTURE_CMAKE_THETA_INCLUDE_DIR
)
mark_as_advanced(WAYBILL_FIXTURE_CMAKE_THETA_INCLUDE_DIR WAYBILL_FIXTURE_CMAKE_THETA_LIBRARY)
