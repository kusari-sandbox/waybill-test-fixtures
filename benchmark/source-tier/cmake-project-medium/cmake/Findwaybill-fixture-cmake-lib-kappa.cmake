# waybill m669 benchmark fixture — synthetic Find module (kappa)
find_path(WAYBILL_FIXTURE_CMAKE_KAPPA_INCLUDE_DIR
    NAMES waybill-fixture-cmake-lib-kappa.h
    PATH_SUFFIXES include
)
find_library(WAYBILL_FIXTURE_CMAKE_KAPPA_LIBRARY
    NAMES waybill-fixture-cmake-lib-kappa
)
include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(waybill-fixture-cmake-lib-kappa
    REQUIRED_VARS WAYBILL_FIXTURE_CMAKE_KAPPA_LIBRARY WAYBILL_FIXTURE_CMAKE_KAPPA_INCLUDE_DIR
)
mark_as_advanced(WAYBILL_FIXTURE_CMAKE_KAPPA_INCLUDE_DIR WAYBILL_FIXTURE_CMAKE_KAPPA_LIBRARY)
