require "waybill-fixture-gem-tool-linter/version"

module ToolLinter
  class Client
    def initialize(config = {})
      @config = config
    end

    def call(payload)
      { status: :ok, payload: payload, version: VERSION }
    end
  end
end
