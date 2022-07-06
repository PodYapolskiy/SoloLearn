package main

import "fmt"

func main() {
	/*
			Arrays
		An array is a sequence of elements of the same type.
		Arrays have a fixed size.
		By default, the elements of the array are initialized to the zero value of the given type.
	*/
	var a [5]int
	b := [5]int{0, 2, 4, 6, 8} // Definition and initialization
	fmt.Println(a)
	fmt.Println(b)

	a[0], a[1] = 8, 42
	fmt.Println(a)
}
