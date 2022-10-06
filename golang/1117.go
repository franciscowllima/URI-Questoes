package main

import (
	"fmt"
)

func main() {
	var (
		nota  float64
		total float64
		media float64
	)
	notas := 0
	for notas < 2 {
		fmt.Scan(&nota)
		if nota >= 0 && nota <= 10 {
			total += nota
			notas++
		} else {
			fmt.Println("nota invalida")
		}
	}
	media = total / 2
	fmt.Println("media =", media)
}
