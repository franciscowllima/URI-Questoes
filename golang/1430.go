package main

import (
	"fmt"
	"io"
)

func calc(s uint8) int {
	if s == 'W' {
		return 64
	} else if s == 'H' {
		return 32
	} else if s == 'Q' {
		return 16
	} else if s == 'E' {
		return 8
	} else if s == 'S' {
		return 4
	} else if s == 'T' {
		return 2
	} else if s == 'X' {
		return 1
	}

	return 0
}

func main() {
	var (
		s       string
		i, c, a int
	)

	for {
		_, err := fmt.Scanf("%s\n", &s)
		if err == io.EOF || s[0] == '*' {
			break
		}

		i = 1
		c = 0
		
		for a = c; i < len(s); i++ {
			c += calc(s[i])
			
			if s[i] == '/' {
				a += boolToInt(c == 64)
				c = 0
			}
		}
		
		fmt.Printf("%d\n", a)
	}
}

func boolToInt(x bool) int {
	if x {
		return 1
	}

	return 0
}

