package main

import "fmt"

var y = 10 // y is declared outside of the functions, making it a global variable, which is accessible anywhere in the package

func test() {
	var x = 8 // x is a local variable and is available only in the body of the test() function
	fmt.Println(x)
	fmt.Println(y)
}

func main() {
	/*
			Scope
		Scope is where a variable can be used.
		Scopes in Go: local and global.

		A variable defined in the function is called a local variable.
		Their scope is only in the function body.

		Function arguments are also local variables for that function.
	*/
	// fmt.Println(x) - cause error
	fmt.Println(y)
}
