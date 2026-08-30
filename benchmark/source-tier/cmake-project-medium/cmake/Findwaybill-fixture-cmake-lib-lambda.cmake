# waybill m669 benchmark fixture — synthetic Find module (lambda)
find_path(WAYBILL_FIXTURE_CMAKE_LAMBDA_INCLUDE_DIR
    NAMES waybill-fixture-cmake-lib-lambda.h
    PATH_SUFFIXES include
)
find_library(WAYBILL_FIXTURE_CMAKE_LAMBDA_LIBRARY
    NAMES waybill-fixture-cmake-lib-lambda
)
include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(waybill-fixture-cmake-lib-lambda
    REQUIRED_VARS WAYBILL_FIXTURE_CMAKE_LAMBDA_LIBRARY WAYBILL_FIXTURE_CMAKE_LAMBDA_INCLUDE_DIR
)
mark_as_advanced(WAYBILL_FIXTURE_CMAKE_LAMBDA_INCLUDE_DIR WAYBILL_FIXTURE_CMAKE_LAMBDA_LIBRARY)
