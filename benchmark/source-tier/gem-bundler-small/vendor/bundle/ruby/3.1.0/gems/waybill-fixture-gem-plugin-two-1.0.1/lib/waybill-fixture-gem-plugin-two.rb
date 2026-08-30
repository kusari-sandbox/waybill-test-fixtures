require "waybill-fixture-gem-plugin-two/version"

module PluginTwo
  class Error < StandardError; end
  def self.hello
    "hello from waybill-fixture-gem-plugin-two"
  end
end
