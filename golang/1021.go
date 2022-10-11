package main

import (
	"fmt"
	"strconv"
)

func main() {
	var valor float64
	fmt.Scanf("%f\n", &valor)
	fmt.Println(notaEmoedasMod(valor))
	
}

func notaEmoedasMod(valor float64) string {
	var (
		nota100, nota50, nota50x, nota20, nota20x, nota10, nota10x, nota5, nota5x, nota2, nota2x, moeda1, moeda1x, moeda050, moeda025, moeda010, moeda005, moeda001 int
	)
	// separar o real dos centavos
	real := int(valor)
	centavos := int((valor - float64(real)) * 100)

	nota100 = real / 100
	nota50 = real % 100
	nota50x = nota50 / 50
	nota20 = nota50 % 50
	nota20x = nota20 / 20
	nota10 = nota20 % 20
	nota10x = nota10 / 10
	nota5 = nota10 % 10
	nota5x = nota5 / 5
	nota2 = nota5 % 5
	nota2x = nota2 / 2

	moeda1 = nota2 % 2
	moeda1x = moeda1 / 1
	moeda050 = centavos / 50
	moeda025 = ((centavos % 50) / 25)
	moeda010 = (((centavos % 50) % 25) / 10)
	moeda005 = ((((centavos % 50) % 25) % 10) / 5)
	moeda001 = (((((centavos % 50) % 25) % 10) % 5) / 1)

	return "NOTAS:\n" +
		strconv.Itoa(nota100) + " nota(s) de R$ 100.00\n" +
		strconv.Itoa(nota50x) + " nota(s) de R$ 50.00\n" +
		strconv.Itoa(nota20x) + " nota(s) de R$ 20.00\n" +
		strconv.Itoa(nota10x) + " nota(s) de R$ 10.00\n" +
		strconv.Itoa(nota5x) + " nota(s) de R$ 5.00\n" +
		strconv.Itoa(nota2x) + " nota(s) de R$ 2.00\n" +
		"MOEDAS:\n" +
		strconv.Itoa(moeda1x) + " moeda(s) de R$ 1.00\n" +
		strconv.Itoa(moeda050) + " moeda(s) de R$ 0.50\n" +
		strconv.Itoa(moeda025) + " moeda(s) de R$ 0.25\n" +
		strconv.Itoa(moeda010) + " moeda(s) de R$ 0.10\n" +
		strconv.Itoa(moeda005) + " moeda(s) de R$ 0.05\n" +
		strconv.Itoa(moeda001) + " moeda(s) de R$ 0.01\n"
}
