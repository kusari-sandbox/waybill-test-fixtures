# waybill m669 benchmark fixture — synthetic install-rules module
function(waybill_fixture_install target)
    install(TARGETS ${target}
        EXPORT waybill-fixture-cmake-rootTargets
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib
    )
endfunction()
