package main

import (
	"net/http"

	"github.com/kusari-oss/waybill-fixture-go-router/router"
)

// HandleHealth returns 200 OK.
func HandleHealth(w http.ResponseWriter, r *http.Request) {
	w.WriteHeader(http.StatusOK)
	_, _ = w.Write([]byte("ok"))
}

// HandleIndex serves the root path.
func HandleIndex(w http.ResponseWriter, r *http.Request) {
	router.Render(w, r, "index")
}

// HandleMetrics exposes counters.
func HandleMetrics(w http.ResponseWriter, r *http.Request) {
	w.WriteHeader(http.StatusOK)
}
