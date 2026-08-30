# waybill m669 benchmark fixture — synthetic Find module (delta)
find_path(WAYBILL_FIXTURE_CMAKE_DELTA_INCLUDE_DIR
    NAMES waybill-fixture-cmake-lib-delta.h
    PATH_SUFFIXES include
)
find_library(WAYBILL_FIXTURE_CMAKE_DELTA_LIBRARY
    NAMES waybill-fixture-cmake-lib-delta
)
include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(waybill-fixture-cmake-lib-delta
    REQUIRED_VARS WAYBILL_FIXTURE_CMAKE_DELTA_LIBRARY WAYBILL_FIXTURE_CMAKE_DELTA_INCLUDE_DIR
)
mark_as_advanced(WAYBILL_FIXTURE_CMAKE_DELTA_INCLUDE_DIR WAYBILL_FIXTURE_CMAKE_DELTA_LIBRARY)
