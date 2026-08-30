require "waybill-fixture-gem-tool-tracer/version"

module ToolTracer
  class Client
    def initialize(config = {})
      @config = config
    end

    def call(payload)
      { status: :ok, payload: payload, version: VERSION }
    end
  end
end
