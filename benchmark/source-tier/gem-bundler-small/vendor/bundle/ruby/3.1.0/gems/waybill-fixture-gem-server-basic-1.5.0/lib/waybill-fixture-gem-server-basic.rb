require "waybill-fixture-gem-server-basic/version"

module ServerBasic
  class Error < StandardError; end
  def self.hello
    "hello from waybill-fixture-gem-server-basic"
  end
end
