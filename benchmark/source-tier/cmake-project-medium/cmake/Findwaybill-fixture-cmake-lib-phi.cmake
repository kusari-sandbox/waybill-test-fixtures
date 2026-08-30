# waybill m669 benchmark fixture — synthetic Find module (phi)
find_path(WAYBILL_FIXTURE_CMAKE_PHI_INCLUDE_DIR
    NAMES waybill-fixture-cmake-lib-phi.h
    PATH_SUFFIXES include
)
find_library(WAYBILL_FIXTURE_CMAKE_PHI_LIBRARY
    NAMES waybill-fixture-cmake-lib-phi
)
include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(waybill-fixture-cmake-lib-phi
    REQUIRED_VARS WAYBILL_FIXTURE_CMAKE_PHI_LIBRARY WAYBILL_FIXTURE_CMAKE_PHI_INCLUDE_DIR
)
mark_as_advanced(WAYBILL_FIXTURE_CMAKE_PHI_INCLUDE_DIR WAYBILL_FIXTURE_CMAKE_PHI_LIBRARY)
