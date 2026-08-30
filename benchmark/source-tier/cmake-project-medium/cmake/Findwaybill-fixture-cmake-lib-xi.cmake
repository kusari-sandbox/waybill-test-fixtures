# waybill m669 benchmark fixture — synthetic Find module (xi)
find_path(WAYBILL_FIXTURE_CMAKE_XI_INCLUDE_DIR
    NAMES waybill-fixture-cmake-lib-xi.h
    PATH_SUFFIXES include
)
find_library(WAYBILL_FIXTURE_CMAKE_XI_LIBRARY
    NAMES waybill-fixture-cmake-lib-xi
)
include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(waybill-fixture-cmake-lib-xi
    REQUIRED_VARS WAYBILL_FIXTURE_CMAKE_XI_LIBRARY WAYBILL_FIXTURE_CMAKE_XI_INCLUDE_DIR
)
mark_as_advanced(WAYBILL_FIXTURE_CMAKE_XI_INCLUDE_DIR WAYBILL_FIXTURE_CMAKE_XI_LIBRARY)
