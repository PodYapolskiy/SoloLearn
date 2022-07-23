package main

import "fmt"

func evenSum(from, to int, ch chan int) {
	res := 0
	for i := from; i <= to; i++ {
		if i%2 == 0 {
			res += i
		}
	}
	ch <- res
}

func squareSum(from, to int, ch chan int) {
	res := 0
	for i := from; i <= to; i++ {
		if i%2 == 0 {
			res += i * i
		}
	}
	ch <- res // Functions send the result via channels
}

func main() {
	/* Channels in use */
	evenCh := make(chan int)
	sqCh := make(chan int)

	go evenSum(0, 100, evenCh)
	go squareSum(0, 100, sqCh)

	// We use the channels to get the result of each Goroutine and output their sum.
	fmt.Println(<-evenCh + <-sqCh)
	
	// We can easily close channels
	close(evenCh)
	close(sqCh)
}
