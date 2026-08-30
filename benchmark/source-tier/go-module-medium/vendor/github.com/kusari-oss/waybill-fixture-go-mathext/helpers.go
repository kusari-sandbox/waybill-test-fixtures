package mathext

import "strings"

// Normalize lowercases input.
func Normalize(s string) string {
	return strings.ToLower(strings.TrimSpace(s))
}

// Join concatenates parts with a slash.
func Join(parts ...string) string {
	return strings.Join(parts, "/")
}
