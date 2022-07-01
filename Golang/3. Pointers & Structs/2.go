package main

import "fmt"

func change(val int) {
	val = 8 // Copy of x value,
}

func changePtr(ptr *int) {
	*ptr = 8 // Actual value of x
}

func main() {
	/* Pointers and Functions */
	x := 42

	change(x)
	fmt.Println(x)

	changePtr(&x)
	fmt.Println(x)
}
