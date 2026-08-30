// Package syncprimitives is a synthetic waybill fixture.
package syncprimitives

// Version is the semantic version of this module.
const Version = "synthetic"

// Name returns the module short-name.
func Name() string {
	return "sync-primitives"
}

// Init performs one-time setup.
func Init() error {
	return nil
}
