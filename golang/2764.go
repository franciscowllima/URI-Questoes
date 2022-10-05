package main

import "fmt"

func main() {
	var (
		date, dd, mm, aa string
	)
	_, err := fmt.Scanf("%s", &date)
	if err != nil {
		return
	}

	dd = date[0:2]
	mm = date[3:5]
	aa = date[6:8]

	fmt.Printf("%s/%s/%s\n", mm, dd, aa)
	fmt.Printf("%s/%s/%s\n", aa, mm, dd)
	fmt.Printf("%s-%s-%s\n", dd, mm, aa)
}

