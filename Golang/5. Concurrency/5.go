package main

import (
	"fmt"
	"time"
)

func evenSum(from, to int, ch chan int) {
	result := 0
	for i := from; i <= to; i++ {
		if i%2 == 0 {
			result += i
		}
	}
	ch <- result
}

func squareSum(from, to int, ch chan int) {
	result := 0
	for i := from; i <= to; i++ {
		if i%2 == 0 {
			result += i * i
		}
	}
	ch <- result
}

func main() {
	/*
			Select Statement
		The select statement waits for a channel to receive data and executes its case.

		A select statement blocks until at least one of its cases can proceed.
		The default case is useful in preventing deadlocks.
		Without it the select would wait for a channel forever, crashing the program if none of the channels received data.
	
		The for-loop avoids "deadlocks" as it allows us to put a sleep timer for the default case.
		Default case should be used only with "for".
	*/
	evenCh := make(chan int)
	sqCh := make(chan int)

	go evenSum(0, 100, evenCh)
	go squareSum(0, 100, sqCh)

	// Only one of the cases will execute - channel that receives data first
	select {
		case x := <-evenCh:
			fmt.Println(x)
		case y := <-sqCh:
			fmt.Println(y)
	}

	// The for loop uses a select to check which channel got data
	// If none of them are ready, the default case will execute which will wait for 50ms
	for {
		select {
			case x := <-evenCh:
				fmt.Println(x)
				return
			case y := <-sqCh:
				fmt.Println(y)
				return
			default:
				fmt.Println("Nothing available")
				time.Sleep(50 * time.Millisecond)
		}
	}
}
