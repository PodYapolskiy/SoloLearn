package main

import "fmt"

func welcome() {
	fmt.Println("Hello")
}

func welcomeSomebody(name string) {
	fmt.Println("Hello, " + name)
}

func sum(a int, b int) {
	fmt.Println(a + b)
}

// If the arguments are of the same type, only one type definision may be done
func mult(a, b int) {
	fmt.Println(a * b)
}

func summary(a, b int) int { // The return type
	return a + b
}

// Functions can return multiple values
func swap(a, b string) (string, string) {
	return b, a
}

func main() {
	/* Functions */
	welcome()

	welcomeSomebody("Joe")
	welcomeSomebody("David")

	sum(42, 8)
	mult(42, 8)

	res := summary(42, 8)
	fmt.Println(res)

	a, b := "10", "5"
	a, b = swap(a, b)
}
