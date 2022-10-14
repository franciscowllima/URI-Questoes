package main

import "fmt"

func main() {
	for {
		var n, r int
		fmt.Scanf("%d\n", &n)
		if n == 0 {
			break
		}
		if n < 1 || n > 100 {
			continue
		}
		for i := 0; i <= n; i++ {
			r += i * i
		}
		fmt.Printf("%d\n", r)
	}
}
