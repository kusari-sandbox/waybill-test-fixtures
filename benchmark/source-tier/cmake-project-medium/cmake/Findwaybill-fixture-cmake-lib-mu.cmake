# waybill m669 benchmark fixture — synthetic Find module (mu)
find_path(WAYBILL_FIXTURE_CMAKE_MU_INCLUDE_DIR
    NAMES waybill-fixture-cmake-lib-mu.h
    PATH_SUFFIXES include
)
find_library(WAYBILL_FIXTURE_CMAKE_MU_LIBRARY
    NAMES waybill-fixture-cmake-lib-mu
)
include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(waybill-fixture-cmake-lib-mu
    REQUIRED_VARS WAYBILL_FIXTURE_CMAKE_MU_LIBRARY WAYBILL_FIXTURE_CMAKE_MU_INCLUDE_DIR
)
mark_as_advanced(WAYBILL_FIXTURE_CMAKE_MU_INCLUDE_DIR WAYBILL_FIXTURE_CMAKE_MU_LIBRARY)
