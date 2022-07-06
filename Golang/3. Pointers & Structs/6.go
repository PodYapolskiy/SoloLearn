package main

import "fmt"

type Contact struct {
	name string
	age  int
}

func (ptr *Contact) increase(val int) {
	ptr.age += val
}

func main() {
	/*
			Pointers in Methods
		When we need to change the data of the struct in a method, we can use pointers.
		Since methods often need to modify their receiver, pointer receivers are more common than value receivers.
	*/
	x := Contact{"James", 42}
	x.increase(8)
	fmt.Println(x.age)
}
