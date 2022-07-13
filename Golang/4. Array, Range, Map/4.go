package main

import "fmt"

func main() {
	/*
			Maps
		Maps are used to store key:value pairs.
		The key is always unique.
		Maps are also called dictionaries, associative arrays, or hash tables.
	*/
	m := make(map[string]int) // m is a map that maps a string key to an integer value
	m["James"] = 42
	m["Amy"] = 24
	fmt.Println(m)

	m2 := map[string]int{"James": 42, "Amy": 24}
	fmt.Println(m2)
	fmt.Println()
	fmt.Println(m["Amy"])
	fmt.Println(m["Steve"]) // Zero value will be returned
	fmt.Println()

	delete(m, "James") // Remove the element with the key "James"
	fmt.Println(m)
}
