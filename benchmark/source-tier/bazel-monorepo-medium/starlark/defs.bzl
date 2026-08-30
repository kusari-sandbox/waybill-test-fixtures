"""Shared Starlark macros for the waybill fixture bazel monorepo."""

load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library", "cc_test")

def waybill_fixture_cc_module(name, srcs, hdrs, deps = [], visibility = None):
    """Wrap cc_library with the fixture's default copts + visibility."""
    cc_library(
        name = name,
        srcs = srcs,
        hdrs = hdrs,
        deps = deps,
        copts = ["-Wall", "-Wextra"],
        visibility = visibility or ["//visibility:private"],
    )

def waybill_fixture_cc_app(name, srcs, deps = []):
    """Wrap cc_binary with fixture-standard linkopts."""
    cc_binary(
        name = name,
        srcs = srcs,
        deps = deps,
        linkopts = ["-lpthread"],
    )
