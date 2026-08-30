"""Proto-adjacent helpers (stubbed for fixture)."""

def waybill_fixture_proto_library(name, srcs, deps = []):
    native.filegroup(
        name = name,
        srcs = srcs,
    )

def waybill_fixture_cc_proto_library(name, deps = []):
    native.filegroup(
        name = name,
        srcs = deps,
    )
