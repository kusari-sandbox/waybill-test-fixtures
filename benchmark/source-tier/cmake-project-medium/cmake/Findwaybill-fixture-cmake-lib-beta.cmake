# waybill m669 benchmark fixture — synthetic Find module (beta)
find_path(WAYBILL_FIXTURE_CMAKE_BETA_INCLUDE_DIR
    NAMES waybill-fixture-cmake-lib-beta.h
    PATH_SUFFIXES include
)
find_library(WAYBILL_FIXTURE_CMAKE_BETA_LIBRARY
    NAMES waybill-fixture-cmake-lib-beta
)
include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(waybill-fixture-cmake-lib-beta
    REQUIRED_VARS WAYBILL_FIXTURE_CMAKE_BETA_LIBRARY WAYBILL_FIXTURE_CMAKE_BETA_INCLUDE_DIR
)
mark_as_advanced(WAYBILL_FIXTURE_CMAKE_BETA_INCLUDE_DIR WAYBILL_FIXTURE_CMAKE_BETA_LIBRARY)
