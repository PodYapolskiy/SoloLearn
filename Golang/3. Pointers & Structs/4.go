package main

import "fmt"

type Contact struct {
	name string
	age  int
}

func main() {
	/*
			Pointers to Structs
		Pointers to structs are useful, as they allow us to pass them to functions as arguments.
	*/

	x := Contact{"Joe", 42}
	p := &x

	fmt.Println(p.age)    // Pointers to structs are automatically dereferenced
	fmt.Println((*p).age) // That looks complicated and hard to read but also correct

	ptr := &Contact{"John", 15} // Pointer to the newly created struct
	fmt.Println(ptr)
}
