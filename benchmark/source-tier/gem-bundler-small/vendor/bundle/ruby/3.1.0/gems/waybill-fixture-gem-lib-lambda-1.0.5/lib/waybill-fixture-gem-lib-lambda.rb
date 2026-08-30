require "waybill-fixture-gem-lib-lambda/version"

module LibLambda
  class Error < StandardError; end
  def self.hello
    "hello from waybill-fixture-gem-lib-lambda"
  end
end
