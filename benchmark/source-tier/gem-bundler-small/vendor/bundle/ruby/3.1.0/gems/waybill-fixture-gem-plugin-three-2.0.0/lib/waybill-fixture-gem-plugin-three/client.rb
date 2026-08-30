require "waybill-fixture-gem-plugin-three/version"

module PluginThree
  class Client
    def initialize(config = {})
      @config = config
    end

    def call(payload)
      { status: :ok, payload: payload, version: VERSION }
    end
  end
end
