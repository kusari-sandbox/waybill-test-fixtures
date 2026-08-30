"""Platform-selection helpers."""

WAYBILL_FIXTURE_PLATFORMS = [
    "@platforms//os:linux",
    "@platforms//os:macos",
    "@platforms//os:windows",
]

def waybill_fixture_select_platform(linux, macos, windows):
    return select({
        "@platforms//os:linux": linux,
        "@platforms//os:macos": macos,
        "@platforms//os:windows": windows,
    })
