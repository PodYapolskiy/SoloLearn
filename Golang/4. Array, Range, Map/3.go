package main

import "fmt"

func main() {
	/* Ranges */
	a := make([]int, 5)
	a[1] = 2
	a[2] = 3

	// Range iterates over slices
	for i, v := range a {
		fmt.Println(i, v)
	}
	fmt.Println()

	// Can skip indexes
	for _, v := range a[1:3] {
		fmt.Println(v)
	}
	fmt.Println()

	str := "hello"
	for _, c := range str { // Outputs Unicode code points of the characters
		fmt.Println(c)
	}
	fmt.Println()

	for _, c := range str {
		fmt.Printf("%c ", c)
	}
}
