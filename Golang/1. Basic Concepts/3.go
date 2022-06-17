package main

import "fmt"

func main() {
	/* Operators */
	x := 42
	y := 8

	/* Arithmetic Operators */
	fmt.Println(x + y) // Addition
	fmt.Println(x - y) // Subtraction
	fmt.Println(x * y) // Multiplication
	fmt.Println(x / y) // Division
	fmt.Println(x % y) // Modulus, results in the remainder of the division

	fmt.Println("hello" + " world")

	/* Relational Operators */
	fmt.Println(x == y) // Equal to
	fmt.Println(x != y) // Not equal to
	fmt.Println(x > y)  // Greater than
	fmt.Println(x < y)  // Less than

	/* Logical Operators */
	fmt.Println(x != y && x <= y) // Logical AND
	fmt.Println(x != y || x <= y) // Logical OR
	fmt.Println(!(x > y))         // Logical NOT
}
