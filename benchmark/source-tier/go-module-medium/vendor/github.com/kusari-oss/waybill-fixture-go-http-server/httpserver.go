// Package httpserver is a synthetic waybill fixture.
package httpserver

// Version is the semantic version of this module.
const Version = "synthetic"

// Name returns the module short-name.
func Name() string {
	return "http-server"
}

// Init performs one-time setup.
func Init() error {
	return nil
}
