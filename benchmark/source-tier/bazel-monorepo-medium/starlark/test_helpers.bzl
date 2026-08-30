"""Test-harness helper macros."""

load("@rules_cc//cc:defs.bzl", "cc_test")

def waybill_fixture_cc_unit_test(name, srcs, deps = []):
    cc_test(
        name = name,
        srcs = srcs,
        deps = deps + ["@waybill_fixture_bazel_test_harness//:main"],
        size = "small",
        timeout = "short",
    )

def waybill_fixture_cc_integration_test(name, srcs, deps = []):
    cc_test(
        name = name,
        srcs = srcs,
        deps = deps + ["@waybill_fixture_bazel_test_harness//:integration"],
        size = "medium",
        tags = ["integration"],
    )
