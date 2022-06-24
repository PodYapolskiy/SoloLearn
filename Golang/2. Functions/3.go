package main

import "fmt"

func main() {
	/*
			Multiple Defer Statements
		The defer calls are stacked on top of each other.
		They are executed in last-in-first-out order.
	*/
	fmt.Println("Start")

	for i := 0; i < 5; i++ {
		defer fmt.Println(i)
	}
	fmt.Println("End")
}
