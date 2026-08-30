"""Codegen helpers."""

def waybill_fixture_generate_header(name, template, out):
    native.genrule(
        name = name,
        srcs = [template],
        outs = [out],
        cmd = "cp $< $@",
    )
