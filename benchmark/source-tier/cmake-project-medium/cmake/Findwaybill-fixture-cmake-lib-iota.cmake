# waybill m669 benchmark fixture — synthetic Find module (iota)
find_path(WAYBILL_FIXTURE_CMAKE_IOTA_INCLUDE_DIR
    NAMES waybill-fixture-cmake-lib-iota.h
    PATH_SUFFIXES include
)
find_library(WAYBILL_FIXTURE_CMAKE_IOTA_LIBRARY
    NAMES waybill-fixture-cmake-lib-iota
)
include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(waybill-fixture-cmake-lib-iota
    REQUIRED_VARS WAYBILL_FIXTURE_CMAKE_IOTA_LIBRARY WAYBILL_FIXTURE_CMAKE_IOTA_INCLUDE_DIR
)
mark_as_advanced(WAYBILL_FIXTURE_CMAKE_IOTA_INCLUDE_DIR WAYBILL_FIXTURE_CMAKE_IOTA_LIBRARY)
