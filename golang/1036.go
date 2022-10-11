package main

import (
	"fmt"
	"io"
	"math"
)

func main() {
	var (
		a, b, c, delta float64
	)

	_, err := fmt.Scanf("%f %f %f\n", &a, &b, &c)
	if err == io.EOF {
		fmt.Println(err)
		return
	}

	if a == 0.0 || ((b*b)-4*a*c) < 0 {
		fmt.Println("Impossivel calcular")
		return
	} else {
		delta = math.Sqrt((b * b) - 4*a*c)
		fmt.Printf("R1 = %.5f\nR2 = %.5f\n", ((-b + delta) / (2 * a)), ((-b - delta) / (2 * a)))
	}
}
