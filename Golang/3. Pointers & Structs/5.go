package main

import "fmt"

type Contact struct {
	name string
	age  int
}

// Contact structure method
func (x Contact) welcome() {
	fmt.Println(x.name)
	fmt.Println(x.age)
}

// Function taking Contact arugment
func welcome(x Contact) {
	fmt.Println(x.name)
	fmt.Println(x.age)
}

func main() {
	/*
			Methods
		Methods are simply functions with a special receiver argument.
	*/
	x := Contact{"James", 42}
	x.welcome()
	fmt.Println("----------------")
	welcome(x)
}
