package main

import (
	"fmt"
	"io"
)

func main() {
	var e string
	
	for {
		_, err := fmt.Scanf("%s\n", &e)
		if err == io.EOF {
			break
		}

		if verificaBalancoParenteses(e) != false {
			fmt.Printf("correct\n")
		} else {
			fmt.Printf("incorrect\n")
		}
	}
}

func verificaBalancoParenteses(str string) bool {
	var balancoParenteses = 0
	
	for i := 0; i < len(str); i++ {
		if str[i] == '(' {
			balancoParenteses++
		} else if str[i] == ')' {
			balancoParenteses--
		}
		
		if balancoParenteses < 0 {
			return false
		}
	}
	
	return balancoParenteses == 0
}
