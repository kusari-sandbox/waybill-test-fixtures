"""Select-expression helpers."""

def waybill_fixture_dbg_or_opt(dbg, opt):
    return select({
        "//conditions:default": opt,
        "@waybill_fixture_bazel_platforms_ext//:dbg": dbg,
    })
