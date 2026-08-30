require "waybill-fixture-gem-adapter-a/version"

module AdapterA
  class Client
    def initialize(config = {})
      @config = config
    end

    def call(payload)
      { status: :ok, payload: payload, version: VERSION }
    end
  end
end
