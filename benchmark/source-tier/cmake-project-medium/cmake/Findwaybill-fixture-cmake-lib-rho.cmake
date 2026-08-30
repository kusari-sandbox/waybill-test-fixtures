# waybill m669 benchmark fixture — synthetic Find module (rho)
find_path(WAYBILL_FIXTURE_CMAKE_RHO_INCLUDE_DIR
    NAMES waybill-fixture-cmake-lib-rho.h
    PATH_SUFFIXES include
)
find_library(WAYBILL_FIXTURE_CMAKE_RHO_LIBRARY
    NAMES waybill-fixture-cmake-lib-rho
)
include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(waybill-fixture-cmake-lib-rho
    REQUIRED_VARS WAYBILL_FIXTURE_CMAKE_RHO_LIBRARY WAYBILL_FIXTURE_CMAKE_RHO_INCLUDE_DIR
)
mark_as_advanced(WAYBILL_FIXTURE_CMAKE_RHO_INCLUDE_DIR WAYBILL_FIXTURE_CMAKE_RHO_LIBRARY)
