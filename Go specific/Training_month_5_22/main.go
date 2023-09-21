package main

import (
	"fmt"
)

func main() {
	fmt.Println(Power(2, 2))
	var res float64
	res = 2 * (Power(1, 2)*.2 + Power(2, 2)*.1 + Power(3, 2)*.05)
	fmt.Println(res)
}

func Power(b float64, e int) float64 {
	var res float64
	res = 1
	for i := 0; i < e; i++ {
		res = res * b
	}
	return res
}
