# waybill m669 benchmark fixture — synthetic Find module (chi)
find_path(WAYBILL_FIXTURE_CMAKE_CHI_INCLUDE_DIR
    NAMES waybill-fixture-cmake-lib-chi.h
    PATH_SUFFIXES include
)
find_library(WAYBILL_FIXTURE_CMAKE_CHI_LIBRARY
    NAMES waybill-fixture-cmake-lib-chi
)
include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(waybill-fixture-cmake-lib-chi
    REQUIRED_VARS WAYBILL_FIXTURE_CMAKE_CHI_LIBRARY WAYBILL_FIXTURE_CMAKE_CHI_INCLUDE_DIR
)
mark_as_advanced(WAYBILL_FIXTURE_CMAKE_CHI_INCLUDE_DIR WAYBILL_FIXTURE_CMAKE_CHI_LIBRARY)
