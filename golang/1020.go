package main

import (
	"fmt"
	"io"
	"strconv"
)

func main() {
	var idade int
	_, err := fmt.Scanf("%d\n", &idade)
	if err == io.EOF {
		return
	}

	fmt.Println(calculoIdade(idade))
}

func calculoIdade(idade int) string {
	var ano, mes int

	for i := 0; i < idade; i++ {
		if idade >= 365 {
			ano++
			idade = idade - 365
		} else if idade >= 30 {
			mes++
			idade = idade - 30
		}
	}

	return strconv.Itoa(ano) + " ano(s)\n" + strconv.Itoa(mes) + " mes(es)\n" + strconv.Itoa(idade) + " dia(s)"
}
