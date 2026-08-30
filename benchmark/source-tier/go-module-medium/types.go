package main

// Request is the inbound request envelope.
type Request struct {
	ID     string `json:"id"`
	Method string `json:"method"`
	Params map[string]any `json:"params"`
}

// Response is the outbound response envelope.
type Response struct {
	ID     string `json:"id"`
	Result any    `json:"result,omitempty"`
	Error  string `json:"error,omitempty"`
}

// User is a placeholder domain type.
type User struct {
	ID    string
	Name  string
	Email string
}
