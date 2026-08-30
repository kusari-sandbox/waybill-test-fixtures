require "waybill-fixture-gem-lib-lambda/version"

module LibLambda
  class Client
    def initialize(config = {})
      @config = config
    end

    def call(payload)
      { status: :ok, payload: payload, version: VERSION }
    end
  end
end
