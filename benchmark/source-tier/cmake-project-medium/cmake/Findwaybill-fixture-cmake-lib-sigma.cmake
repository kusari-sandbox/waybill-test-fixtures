# waybill m669 benchmark fixture — synthetic Find module (sigma)
find_path(WAYBILL_FIXTURE_CMAKE_SIGMA_INCLUDE_DIR
    NAMES waybill-fixture-cmake-lib-sigma.h
    PATH_SUFFIXES include
)
find_library(WAYBILL_FIXTURE_CMAKE_SIGMA_LIBRARY
    NAMES waybill-fixture-cmake-lib-sigma
)
include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(waybill-fixture-cmake-lib-sigma
    REQUIRED_VARS WAYBILL_FIXTURE_CMAKE_SIGMA_LIBRARY WAYBILL_FIXTURE_CMAKE_SIGMA_INCLUDE_DIR
)
mark_as_advanced(WAYBILL_FIXTURE_CMAKE_SIGMA_INCLUDE_DIR WAYBILL_FIXTURE_CMAKE_SIGMA_LIBRARY)
