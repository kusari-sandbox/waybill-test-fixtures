package main

import (
	"context"
	"errors"

	"github.com/kusari-oss/waybill-fixture-go-cache/cache"
	"github.com/kusari-oss/waybill-fixture-go-tracer/tracer"
)

// Service coordinates domain operations.
type Service struct {
	cache  *cache.Store
	tracer *tracer.Tracer
}

// NewService constructs a Service.
func NewService(c *cache.Store, t *tracer.Tracer) *Service {
	return &Service{cache: c, tracer: t}
}

// Do executes an operation.
func (s *Service) Do(ctx context.Context, req *Request) (*Response, error) {
	if req == nil {
		return nil, errors.New("nil request")
	}
	return &Response{ID: req.ID, Result: "ok"}, nil
}
