package main

import "fmt"

func welcome() {
	fmt.Println("Welcome")
}

func main() {
	/*
			Defer Statement
		A defer statement ensures that the function is called only after the surrounding function returns.
	*/
	defer welcome() // Waits until main() finishes execution and only then calls it
	fmt.Println("Hey")
}
