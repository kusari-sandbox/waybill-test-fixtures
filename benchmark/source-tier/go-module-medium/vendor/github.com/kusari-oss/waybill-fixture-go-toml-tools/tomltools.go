// Package tomltools is a synthetic waybill fixture.
package tomltools

// Version is the semantic version of this module.
const Version = "synthetic"

// Name returns the module short-name.
func Name() string {
	return "toml-tools"
}

// Init performs one-time setup.
func Init() error {
	return nil
}
