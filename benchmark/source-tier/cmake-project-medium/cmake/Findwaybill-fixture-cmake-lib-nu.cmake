# waybill m669 benchmark fixture — synthetic Find module (nu)
find_path(WAYBILL_FIXTURE_CMAKE_NU_INCLUDE_DIR
    NAMES waybill-fixture-cmake-lib-nu.h
    PATH_SUFFIXES include
)
find_library(WAYBILL_FIXTURE_CMAKE_NU_LIBRARY
    NAMES waybill-fixture-cmake-lib-nu
)
include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(waybill-fixture-cmake-lib-nu
    REQUIRED_VARS WAYBILL_FIXTURE_CMAKE_NU_LIBRARY WAYBILL_FIXTURE_CMAKE_NU_INCLUDE_DIR
)
mark_as_advanced(WAYBILL_FIXTURE_CMAKE_NU_INCLUDE_DIR WAYBILL_FIXTURE_CMAKE_NU_LIBRARY)
