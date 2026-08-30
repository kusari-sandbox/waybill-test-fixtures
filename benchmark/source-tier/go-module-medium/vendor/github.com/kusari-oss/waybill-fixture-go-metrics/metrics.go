// Package metrics is a synthetic waybill fixture.
package metrics

// Version is the semantic version of this module.
const Version = "synthetic"

// Name returns the module short-name.
func Name() string {
	return "metrics"
}

// Init performs one-time setup.
func Init() error {
	return nil
}
