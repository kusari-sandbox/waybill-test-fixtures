# waybill m669 benchmark fixture — synthetic Find module (zeta)
find_path(WAYBILL_FIXTURE_CMAKE_ZETA_INCLUDE_DIR
    NAMES waybill-fixture-cmake-lib-zeta.h
    PATH_SUFFIXES include
)
find_library(WAYBILL_FIXTURE_CMAKE_ZETA_LIBRARY
    NAMES waybill-fixture-cmake-lib-zeta
)
include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(waybill-fixture-cmake-lib-zeta
    REQUIRED_VARS WAYBILL_FIXTURE_CMAKE_ZETA_LIBRARY WAYBILL_FIXTURE_CMAKE_ZETA_INCLUDE_DIR
)
mark_as_advanced(WAYBILL_FIXTURE_CMAKE_ZETA_INCLUDE_DIR WAYBILL_FIXTURE_CMAKE_ZETA_LIBRARY)
