// Package config is a synthetic waybill fixture.
package config

// Version is the semantic version of this module.
const Version = "synthetic"

// Name returns the module short-name.
func Name() string {
	return "config"
}

// Init performs one-time setup.
func Init() error {
	return nil
}
