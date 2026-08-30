require "waybill-fixture-gem-adapter-b/version"

module AdapterB
  class Error < StandardError; end
  def self.hello
    "hello from waybill-fixture-gem-adapter-b"
  end
end
