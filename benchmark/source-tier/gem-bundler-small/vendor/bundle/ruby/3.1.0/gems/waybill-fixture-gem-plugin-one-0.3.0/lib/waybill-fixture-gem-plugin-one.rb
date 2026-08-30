require "waybill-fixture-gem-plugin-one/version"

module PluginOne
  class Error < StandardError; end
  def self.hello
    "hello from waybill-fixture-gem-plugin-one"
  end
end
