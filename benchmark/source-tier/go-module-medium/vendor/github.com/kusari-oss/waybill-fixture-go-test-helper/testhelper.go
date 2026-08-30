// Package testhelper is a synthetic waybill fixture.
package testhelper

// Version is the semantic version of this module.
const Version = "synthetic"

// Name returns the module short-name.
func Name() string {
	return "test-helper"
}

// Init performs one-time setup.
func Init() error {
	return nil
}
