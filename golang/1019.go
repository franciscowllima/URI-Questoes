package main
 
import (
    "fmt"
)
 
func main() {
var segundos int64
	fmt.Scanf("%d", &segundos)
	
	minutos := segundos / 60
	horas := minutos /60
	for minutos>60{
		minutos = minutos -60
	}
	
	fmt.Printf("%d:%d:%d\n", horas, minutos, segundos%60)
}