package main

import (
	"fmt"
	"time"
)

func out(from, to int) {
	for i := from; i < to; i++ {
		time.Sleep(100 * time.Millisecond)
		fmt.Print(i)
	}
	fmt.Println()
}

func main() {
	/*
			Concurrency
		Concurrency means multiple computations are happening at the same time.
		Concurrency is about creating multiple processes executing independently.

		A Goroutine is much like a thread to accomplish multiple tasks, but it consumes fewer resources than OS threads.
		A Goroutine is much like a thread to accomplish multiple tasks, but it consumes fewer resources than OS threads.
	*/
	out(0, 5)  // Sequential program
	out(6, 10) // Statements are executed one after the other
	fmt.Println()

	go out(0, 5)
	go out(6, 10)

	// Line below is nessesery if we want to achive concurrency in this code
	// 3 virtual threads: the 2 function calls, and main()
	time.Sleep(600 * time.Millisecond)
}
