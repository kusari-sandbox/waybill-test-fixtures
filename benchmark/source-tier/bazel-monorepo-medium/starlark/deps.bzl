"""Third-party dependency helper wrappers."""

def waybill_fixture_wrap_lib(name, external_target):
    native.alias(
        name = name,
        actual = external_target,
    )
