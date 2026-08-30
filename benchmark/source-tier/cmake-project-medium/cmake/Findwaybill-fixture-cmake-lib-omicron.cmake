# waybill m669 benchmark fixture — synthetic Find module (omicron)
find_path(WAYBILL_FIXTURE_CMAKE_OMICRON_INCLUDE_DIR
    NAMES waybill-fixture-cmake-lib-omicron.h
    PATH_SUFFIXES include
)
find_library(WAYBILL_FIXTURE_CMAKE_OMICRON_LIBRARY
    NAMES waybill-fixture-cmake-lib-omicron
)
include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(waybill-fixture-cmake-lib-omicron
    REQUIRED_VARS WAYBILL_FIXTURE_CMAKE_OMICRON_LIBRARY WAYBILL_FIXTURE_CMAKE_OMICRON_INCLUDE_DIR
)
mark_as_advanced(WAYBILL_FIXTURE_CMAKE_OMICRON_INCLUDE_DIR WAYBILL_FIXTURE_CMAKE_OMICRON_LIBRARY)
