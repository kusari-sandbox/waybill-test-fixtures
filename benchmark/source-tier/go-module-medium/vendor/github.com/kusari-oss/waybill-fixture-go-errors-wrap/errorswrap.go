// Package errorswrap is a synthetic waybill fixture.
package errorswrap

// Version is the semantic version of this module.
const Version = "synthetic"

// Name returns the module short-name.
func Name() string {
	return "errors-wrap"
}

// Init performs one-time setup.
func Init() error {
	return nil
}
