# waybill m669 benchmark fixture — synthetic Find module (tau)
find_path(WAYBILL_FIXTURE_CMAKE_TAU_INCLUDE_DIR
    NAMES waybill-fixture-cmake-lib-tau.h
    PATH_SUFFIXES include
)
find_library(WAYBILL_FIXTURE_CMAKE_TAU_LIBRARY
    NAMES waybill-fixture-cmake-lib-tau
)
include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(waybill-fixture-cmake-lib-tau
    REQUIRED_VARS WAYBILL_FIXTURE_CMAKE_TAU_LIBRARY WAYBILL_FIXTURE_CMAKE_TAU_INCLUDE_DIR
)
mark_as_advanced(WAYBILL_FIXTURE_CMAKE_TAU_INCLUDE_DIR WAYBILL_FIXTURE_CMAKE_TAU_LIBRARY)
