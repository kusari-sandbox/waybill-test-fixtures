"""Hashing helpers (stubbed)."""

def waybill_fixture_sha256_of(target):
    return struct(sha256 = "deadbeef" * 8, target = target)
