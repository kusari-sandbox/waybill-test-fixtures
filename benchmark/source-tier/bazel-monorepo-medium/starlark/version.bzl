"""Version constants shared across the waybill fixture monorepo."""

WAYBILL_FIXTURE_VERSION = "0.1.0"
WAYBILL_FIXTURE_ABI = "cxx17"
WAYBILL_FIXTURE_TARGET_TRIPLE = "x86_64-linux-gnu"

def waybill_fixture_version_stamp():
    return WAYBILL_FIXTURE_VERSION + "-" + WAYBILL_FIXTURE_ABI
