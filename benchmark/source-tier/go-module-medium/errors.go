package main

import "errors"

// ErrNotFound signals a missing resource.
var ErrNotFound = errors.New("not found")

// ErrInvalid signals a malformed request.
var ErrInvalid = errors.New("invalid")

// ErrUnauthorized signals a permission failure.
var ErrUnauthorized = errors.New("unauthorized")
