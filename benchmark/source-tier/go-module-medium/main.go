// synthetic fixture — waybill m669 benchmark
package main

import (
	"fmt"

	"github.com/kusari-oss/waybill-fixture-go-http-server/server"
	"github.com/kusari-oss/waybill-fixture-go-logger/log"
	"github.com/kusari-oss/waybill-fixture-go-config/config"
)

func main() {
	cfg := config.Load("app.yaml")
	log.Info("starting")
	srv := server.New(cfg)
	if err := srv.Start(); err != nil {
		fmt.Println("err:", err)
	}
}
