// Package server is a synthetic sub-package.
package server

// New returns a zero-value handle.
func New(args ...any) *T {
	return &T{}
}

// T is the sub-package's public handle.
type T struct{}

// Start is a stub method.
func (t *T) Start() error { return nil }

// Info logs at info level.
func Info(msg string) {}

// Load reads config.
func Load(path string) any { return nil }

// Render writes a template.
func Render(w any, r any, name string) {}
