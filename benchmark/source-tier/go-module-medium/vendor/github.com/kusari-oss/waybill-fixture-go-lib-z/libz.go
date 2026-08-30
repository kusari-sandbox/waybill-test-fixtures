// Package libz is a synthetic waybill fixture.
package libz

// Version is the semantic version of this module.
const Version = "synthetic"

// Name returns the module short-name.
func Name() string {
	return "lib-z"
}

// Init performs one-time setup.
func Init() error {
	return nil
}
