# Build notes

This fixture is not intended to build. It exists to give waybill a
Bazel-shaped filesystem to walk. All C++ sources are 10-line stubs
with `#pragma once` on headers and a single free function per .cc.
