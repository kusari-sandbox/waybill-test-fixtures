require "waybill-fixture-gem-client-basic/version"

module ClientBasic
  class Client
    def initialize(config = {})
      @config = config
    end

    def call(payload)
      { status: :ok, payload: payload, version: VERSION }
    end
  end
end
