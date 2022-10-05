package main

import "fmt"

type j struct {
	n  string
	s  int
	b  int
	a  int
	ss int
	bs int
	as int
}

func main() {
	var (
		n, i, ts, tb, ta, tss, tbs, tas int
	)
	_, err := fmt.Scanf("%d", &n)
	if err != nil {
		return
	}

	js := make([]j, n)

	for i = 0; i < n; i++ {
		_, err := fmt.Scanf("%s", &js[i].n)
		if err != nil {
			return
		}
		_, err = fmt.Scanf("%d %d %d", &js[i].s, &js[i].b, &js[i].a)
		if err != nil {
			return
		}
		_, err = fmt.Scanf("%d %d %d", &js[i].ss, &js[i].bs, &js[i].as)
		if err != nil {
			return
		}

		ts += js[i].s
		tb += js[i].b
		ta += js[i].a
		tss += js[i].ss
		tbs += js[i].bs
		tas += js[i].as
	}

	fmt.Printf("Pontos de Saque: %.2f %%.\n", float64(100*tss)/float64(ts))
	fmt.Printf("Pontos de Bloqueio: %.2f %%.\n", float64(100*tbs)/float64(tb))
	fmt.Printf("Pontos de Ataque: %.2f %%.\n", float64(100*tas)/float64(ta))
}
