"""Toolchain utility helpers."""

def waybill_fixture_select_compiler(cc = None, cxx = None):
    return struct(cc = cc or "gcc", cxx = cxx or "g++")

def waybill_fixture_toolchain_label(name):
    return "//tools:" + name
