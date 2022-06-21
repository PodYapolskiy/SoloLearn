package main

import "fmt"

func main() {
	/* Loops */
	for i := 0; i < 5; i++ {
		fmt.Println(i)
	}

	sum := 1
	res := 0
	for sum <= 10 { // The init and post statements can be omitted
		res += sum
		sum++
	}
	fmt.Println(res)
}
