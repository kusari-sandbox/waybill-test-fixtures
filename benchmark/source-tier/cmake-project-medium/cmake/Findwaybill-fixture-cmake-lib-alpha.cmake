# waybill m669 benchmark fixture — synthetic Find module (alpha)
# Not a real find module; exists only to grow file-count for the walker.
find_path(WAYBILL_FIXTURE_CMAKE_ALPHA_INCLUDE_DIR
    NAMES waybill-fixture-cmake-lib-alpha.h
    PATH_SUFFIXES include
)
find_library(WAYBILL_FIXTURE_CMAKE_ALPHA_LIBRARY
    NAMES waybill-fixture-cmake-lib-alpha
)
include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(waybill-fixture-cmake-lib-alpha
    REQUIRED_VARS WAYBILL_FIXTURE_CMAKE_ALPHA_LIBRARY WAYBILL_FIXTURE_CMAKE_ALPHA_INCLUDE_DIR
)
mark_as_advanced(WAYBILL_FIXTURE_CMAKE_ALPHA_INCLUDE_DIR WAYBILL_FIXTURE_CMAKE_ALPHA_LIBRARY)
