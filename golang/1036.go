package main

import (
	"fmt"
	"io"
	"math"
)

func main() {
	var (
		a, b, c       float64
		delta, r1, r2 float64
	)

	_, err := fmt.Scanf("%f %f %f\n", &a, &b, &c)
	if err == io.EOF {
		fmt.Println(err)
		return
	}

	if a == 0.0 {
		fmt.Println("Impossível de calcular")
		return
	}

	delta = math.Sqrt(math.Pow(b, 2.0) - 4*(a*c))

	if math.IsNaN(delta) {
		fmt.Println("Impossível de calcular")
		return
	}

	r1 = ((-1 * b) + delta) / (2 * a)
	r2 = ((-1 * b) - delta) / (2 * a)

	fmt.Printf("%.5f %.5f\n", r1, r2)
}
