package main

import "fmt"

func main() {
	const porcetagem = 0.15

	var (
		nomeVendendor string
		salarioFixo   float64
		totalVendas   float64
	)

	fmt.Scanln(&nomeVendendor)
	fmt.Scanln(&salarioFixo)
	fmt.Scanln(&totalVendas)

	salarioBonus := salarioFixo + (porcetagem * totalVendas)

	fmt.Printf("TOTAL = R$ %.2f\n", salarioBonus)
}
