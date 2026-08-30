# waybill m669 benchmark fixture — synthetic Find module (eta)
find_path(WAYBILL_FIXTURE_CMAKE_ETA_INCLUDE_DIR
    NAMES waybill-fixture-cmake-lib-eta.h
    PATH_SUFFIXES include
)
find_library(WAYBILL_FIXTURE_CMAKE_ETA_LIBRARY
    NAMES waybill-fixture-cmake-lib-eta
)
include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(waybill-fixture-cmake-lib-eta
    REQUIRED_VARS WAYBILL_FIXTURE_CMAKE_ETA_LIBRARY WAYBILL_FIXTURE_CMAKE_ETA_INCLUDE_DIR
)
mark_as_advanced(WAYBILL_FIXTURE_CMAKE_ETA_INCLUDE_DIR WAYBILL_FIXTURE_CMAKE_ETA_LIBRARY)
