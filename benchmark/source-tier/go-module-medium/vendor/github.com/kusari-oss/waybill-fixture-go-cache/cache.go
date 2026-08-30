// Package cache is a synthetic waybill fixture.
package cache

// Version is the semantic version of this module.
const Version = "synthetic"

// Name returns the module short-name.
func Name() string {
	return "cache"
}

// Init performs one-time setup.
func Init() error {
	return nil
}
