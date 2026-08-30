# waybill m669 benchmark fixture — synthetic Find module (upsilon)
find_path(WAYBILL_FIXTURE_CMAKE_UPSILON_INCLUDE_DIR
    NAMES waybill-fixture-cmake-lib-upsilon.h
    PATH_SUFFIXES include
)
find_library(WAYBILL_FIXTURE_CMAKE_UPSILON_LIBRARY
    NAMES waybill-fixture-cmake-lib-upsilon
)
include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(waybill-fixture-cmake-lib-upsilon
    REQUIRED_VARS WAYBILL_FIXTURE_CMAKE_UPSILON_LIBRARY WAYBILL_FIXTURE_CMAKE_UPSILON_INCLUDE_DIR
)
mark_as_advanced(WAYBILL_FIXTURE_CMAKE_UPSILON_INCLUDE_DIR WAYBILL_FIXTURE_CMAKE_UPSILON_LIBRARY)
