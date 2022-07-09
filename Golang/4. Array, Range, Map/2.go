package main

import "fmt"

func main() {
	/*
			Slices
		Slice is a dynamically-sized view into the elements of an array.
		Slice does not store any data; it just describes a section of an underlying array.
	*/
	a := [5]int{0, 2, 4, 6, 8}
	var s []int = a[1:3]
	fmt.Println(s)

	var s2 []int = a[4:]
	fmt.Println(s2)

	s[1] = 5 // Changing the elements of a slice modifies the corresponding elements of its underlying array
	fmt.Println(a)

	arr := make([]int, 5)   // make() function creates slices
	arr = append(arr, 8, 9) // append() function add elements to a given slice
	fmt.Println(arr)
}
