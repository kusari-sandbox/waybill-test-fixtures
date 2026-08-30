"""Coverage-collection macros (stubbed for fixture)."""

def waybill_fixture_coverage_report(name, targets):
    native.genrule(
        name = name,
        srcs = targets,
        outs = [name + ".cov"],
        cmd = "echo 'cov' > $@",
        tags = ["coverage"],
    )
