require "waybill-fixture-gem-adapter-a/version"

module AdapterA
  class Error < StandardError; end
  def self.hello
    "hello from waybill-fixture-gem-adapter-a"
  end
end
