# Fixture helper macros.
function(waybill_fixture_add_target name)
  add_library(${name} STATIC ${ARGN})
  target_compile_features(${name} PUBLIC cxx_std_17)
endfunction()

function(waybill_fixture_link_all target)
  foreach(dep IN LISTS ARGN)
    target_link_libraries(${target} PRIVATE ${dep})
  endforeach()
endfunction()
