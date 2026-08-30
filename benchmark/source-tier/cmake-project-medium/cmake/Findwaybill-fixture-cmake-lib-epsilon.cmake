# waybill m669 benchmark fixture — synthetic Find module (epsilon)
find_path(WAYBILL_FIXTURE_CMAKE_EPSILON_INCLUDE_DIR
    NAMES waybill-fixture-cmake-lib-epsilon.h
    PATH_SUFFIXES include
)
find_library(WAYBILL_FIXTURE_CMAKE_EPSILON_LIBRARY
    NAMES waybill-fixture-cmake-lib-epsilon
)
include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(waybill-fixture-cmake-lib-epsilon
    REQUIRED_VARS WAYBILL_FIXTURE_CMAKE_EPSILON_LIBRARY WAYBILL_FIXTURE_CMAKE_EPSILON_INCLUDE_DIR
)
mark_as_advanced(WAYBILL_FIXTURE_CMAKE_EPSILON_INCLUDE_DIR WAYBILL_FIXTURE_CMAKE_EPSILON_LIBRARY)
