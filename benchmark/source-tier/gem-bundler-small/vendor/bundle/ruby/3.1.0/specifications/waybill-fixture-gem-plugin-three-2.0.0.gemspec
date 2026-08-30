# -*- encoding: utf-8 -*-
# stub: waybill-fixture-gem-plugin-three 2.0.0 ruby lib

Gem::Specification.new do |s|
  s.name = "waybill-fixture-gem-plugin-three"
  s.version = "2.0.0"
  s.summary = "Synthetic fixture gem waybill-fixture-gem-plugin-three"
  s.description = "Synthetic fixture gem used by waybill benchmarks."
  s.authors = ["Waybill Fixture Author"]
  s.email = ["fixtures@waybill.test"]
  s.license = "MIT"
  s.homepage = "https://example.invalid/waybill-fixture-gem-plugin-three"
  s.require_paths = ["lib"]
  s.required_ruby_version = ">= 2.7"
  s.add_runtime_dependency("waybill-fixture-gem-plugin-two", "~> 1.0")
  s.add_runtime_dependency("waybill-fixture-gem-lib-emitter", "~> 0.7")
end
