# waybill m669 benchmark fixture — synthetic helpers module
function(waybill_fixture_configure_target target)
    set_target_properties(${target} PROPERTIES
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED ON
    )
endfunction()
