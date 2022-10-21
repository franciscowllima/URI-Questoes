package main

import "fmt"

func main() {

	var distanciaPercorrida, totalCombustivel float64

	fmt.Scanln(&distanciaPercorrida)
	fmt.Scanln(&totalCombustivel)

	fmt.Printf("%.3f km/l\n", distanciaPercorrida/totalCombustivel)

}