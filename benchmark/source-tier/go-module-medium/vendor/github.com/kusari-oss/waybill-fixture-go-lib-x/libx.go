// Package libx is a synthetic waybill fixture.
package libx

// Version is the semantic version of this module.
const Version = "synthetic"

// Name returns the module short-name.
func Name() string {
	return "lib-x"
}

// Init performs one-time setup.
func Init() error {
	return nil
}
