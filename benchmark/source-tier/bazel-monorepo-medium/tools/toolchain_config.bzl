"""Toolchain-config stub for the waybill fixture."""

WAYBILL_FIXTURE_TOOLCHAIN_ID = "waybill_fixture_bazel_cc_toolchain"
WAYBILL_FIXTURE_TOOLCHAIN_ARCH = "x86_64"
WAYBILL_FIXTURE_TOOLCHAIN_OS = "linux"

def waybill_fixture_toolchain_info():
    return struct(
        id = WAYBILL_FIXTURE_TOOLCHAIN_ID,
        arch = WAYBILL_FIXTURE_TOOLCHAIN_ARCH,
        os = WAYBILL_FIXTURE_TOOLCHAIN_OS,
    )
