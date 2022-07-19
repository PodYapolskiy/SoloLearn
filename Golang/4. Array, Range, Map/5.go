package main

import "fmt"

func sum(nums ...int) int {
	total := 0
	for _, v := range nums {
		total += v
	}
	return total
}

func main() {
	/*
			Variadic Functions
		Variadic functions are functions that can be called with any number of arguments.
	*/
	fmt.Println(sum(2, 4, 6), sum(42, 8), sum(1, 2, 3, 4, 5, 6)) // Println function is also variadic.

	slice := []int{42, 33, 22, 11}
	fmt.Println(sum(slice...)) // ... unpackes slice's values
}
