package main

import "fmt"

func main() {
	/* Decision Statements */
	age := 14

	if age > 18 {
		fmt.Println("Allowed")
	} else {
		fmt.Println("Not allowed")
	}

	if x := 42; x > 99 {
		fmt.Println("Too old")
	} else if x > 18 {
		fmt.Println("Allowed")
	} else {
		fmt.Println("Not allowed")
	}
}
