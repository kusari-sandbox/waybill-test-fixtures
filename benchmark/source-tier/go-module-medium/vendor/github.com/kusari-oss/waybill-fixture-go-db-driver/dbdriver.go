// Package dbdriver is a synthetic waybill fixture.
package dbdriver

// Version is the semantic version of this module.
const Version = "synthetic"

// Name returns the module short-name.
func Name() string {
	return "db-driver"
}

// Init performs one-time setup.
func Init() error {
	return nil
}
