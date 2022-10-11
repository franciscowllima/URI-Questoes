package main

import (
	"bufio"
	"fmt"
	"io"
	"os"
	"unicode"
)

func main() {
	var (
		n int
	)

	_, err := fmt.Scanf("%d\n", &n)
	if err == io.EOF {
		return
	}

	if n < 1 || n > 10000 {
		return
	}

	for i := 0; i < n; i++ {
		var s string

		in := bufio.NewReader(os.Stdin)

		s, err := in.ReadString('\n')
		if err != nil {
			continue
		}

		if len(s) < 1 || len(s) > 1000 {
			continue
		}

		shiftThreeRight := func(b byte) byte {
			if unicode.IsLetter(rune(b)) {
				return b + 3
			}
			return b
		}
		shiftOneLeft := func(b byte) byte {
			return b - 1
		}

		z := []byte(s)

		for k, v := range z {
			z[k] = shiftThreeRight(v)
		}

		r := make([]byte, 0)

		for k := len(z) - 1; k > 0; k-- {
			r = append(r, z[k])
		}

		j := len(r) / 2

		var q = make([]byte, j)

		copy(q, r[j:])

		for k, v := range q {
			q[k] = shiftOneLeft(v)
		}

		var p = make([]byte, len(r)-j)

		copy(p, r[:j])

		p = append(p, q...)

		fmt.Println(string(p))
	}
}
