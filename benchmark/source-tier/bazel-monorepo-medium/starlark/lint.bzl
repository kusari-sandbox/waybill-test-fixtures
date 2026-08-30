"""Linting rules for the waybill fixture monorepo."""

def waybill_fixture_lint_check(name, srcs, config = None):
    native.genrule(
        name = name,
        srcs = srcs,
        outs = [name + ".lint.log"],
        cmd = "echo 'lint ok' > $@",
        tags = ["lint"],
    )

def waybill_fixture_format_check(name, srcs):
    native.genrule(
        name = name,
        srcs = srcs,
        outs = [name + ".fmt.log"],
        cmd = "echo 'fmt ok' > $@",
        tags = ["format"],
    )
