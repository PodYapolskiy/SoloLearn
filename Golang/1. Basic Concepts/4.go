package main

import "fmt"

func main() {
	/* Input */
	var stringInput string
	fmt.Scanln(&stringInput) // '&' - address of a variable
	fmt.Println(stringInput + "!!!")

	var integerInput int
	fmt.Scanln(&integerInput)
	fmt.Println(integerInput * 2)
}
