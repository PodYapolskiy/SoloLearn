package main

import "fmt"

//! Throws error (Don't know why)
func main() {
	/*
			Channels
		To enable communication between Goroutines, Go provides Channels.
		A channel is like a pipe, allowing us to send and receive data from Goroutines, and enabling them to communicate and synchronize.
		Data flows in the direction of the arrow.
	*/
	// The type after the chan keyword indicates the type of the data we will send through the channel
	channel := make(chan int)
	defer close(channel)

	channel <- 8 // Sending data to the channel
	channel <- 9

	fmt.Println(channel)
	value := <-channel // Receiving data from the channel
	fmt.Println(value)
	<-channel
}
