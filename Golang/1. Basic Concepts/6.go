package main

import "fmt"

func main() {
	/*
			Switch Statement
		The break statement is not needed.
		Switch cases evaluate from top to bottom, stopping when a case succeeds.
	*/
	num := 3
	switch num {
		case 1:
			fmt.Println("One")
		case 2:
			fmt.Println("Two")
		case 3:
			fmt.Println("Three")
		default:
			fmt.Println(num)
	}

	x := 2
	switch {
		case x > 0 && x < 10:
			fmt.Println("something")
		case x > 10:
			fmt.Println("something else")
	}
}
