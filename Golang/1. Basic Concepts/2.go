package main

import "fmt"

func main() {
	/*
			Variables
		Variables that are declared without a value take the zero value of their type:
		int: 0
		bool: false
		string: ""
	*/
	var i int // Declaration
	i = 1     // Initialization
	fmt.Println(i)

	var x, y = 2, 3 // Go automatically takes the type
	fmt.Println(x, y)

	// Short variable declaration
	j := 4 // Automatically defines and initialized variables
	fmt.Println(j)

	// Data Types
	var integer int = 5
	var float float64 = 3.14
	var str string = "hi"
	var boolean bool = false
	fmt.Println(integer, float, str, boolean)

	// Constants
	const pi = 3.14 // Constants cannot be declared using the ":="
	fmt.Println(pi)
}
