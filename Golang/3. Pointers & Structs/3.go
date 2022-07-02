package main

import "fmt"

type Contact struct {
	name string
	age  int
}

func main() {
	/*
			Structs
		Structs are collections of fields that allow you to group data together.
	*/
	x := Contact{"James", 42}
	fmt.Println(x)
	fmt.Println(x.age)

	y := Contact{name: "Joe", age: 69}
	fmt.Println(y)
}
