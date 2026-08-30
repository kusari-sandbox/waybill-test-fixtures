# Central compiler-flag policy for the waybill-fixture-conan project.
add_compile_options(-Wall -Wextra -Wpedantic)
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif()
