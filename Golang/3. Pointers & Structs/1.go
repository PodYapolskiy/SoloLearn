package main

import "fmt"

func main() {
	/*
			Pointers
		Pointers are special variables that hold the memory address of values.
		Pointers allow us to pass references to values in your program.
	*/
	var p *int // p is a pointer to an integer value

	x := 42
	p = &x

	fmt.Println(p)
	fmt.Println(*p) // Accepts the value of a pointer using "*" (dereferencing) operator
	fmt.Println(x)

	*p = 8 // Changing the x value
	fmt.Println(x)
}
