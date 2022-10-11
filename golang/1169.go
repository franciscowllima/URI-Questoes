package main

import (
	"fmt"
	"io"
	"math"
)

const grains = 12

func main() {
	var tries int64

	_, err := fmt.Scanf("%d\n", &tries)
	if err == io.EOF {
		return
	}

	if tries < 1 || tries > 100 {
		return
	}

	for i := int64(0); i < tries; i++ {
		var houses uint64

		_, err := fmt.Scanf("%d\n", &houses)
		if err == io.EOF {
			continue
		}

		if houses < 1 || houses > 64 {
			return
		}

		x := int64(((math.Pow(2, float64(houses)) - 1) / 12) / 1000)

		fmt.Printf("%d kg\n", x)
	}
}
