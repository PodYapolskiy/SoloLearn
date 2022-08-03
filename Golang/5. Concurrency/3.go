package main

import (
	"fmt"
	"time"
)

func out(from, to int, ch chan bool) {
	for i := from; i <= to; i++ {
		time.Sleep(50 * time.Millisecond)
		fmt.Println(i)
	}
	ch <- true // After the function finishes its task, we send the value true to the channel
}

func main() { // main() is waiting to receive data from the channel
	ch := make(chan bool) //  bool channel passing into out() function

	go out(0, 5, ch)
	go out(6, 10, ch)

	// The receive operation blocks the code until and unless some data is sent by the send operation
	// If no data is received, a deadlock will occur, blocking the code from executing
	<-ch
}
