package main

import (
	"fmt"
	"time"
)

func primecheck(primenum int64) {

	primecoutn := 0
	for i := 2; i <= int(primenum); i++ {

		isprime := true

		for j := 2; j*j <= i; j++ {

			if i%j == 0 {
				isprime = false
				break
			}
		}
		if isprime {
			fmt.Printf(" %v is a prime number :D \n", i)
			primecoutn++
		}
	}

	fmt.Printf("\n\n we got total %v prime number form 1 million <3", primecoutn)
}

func main() {
	start := time.Now()
	primecheck(1000000)
	end := time.Since(start)
	fmt.Printf("\n\n it took like %v to check primenumebr form 1million ", end)
	fmt.Printf("\n\n In c++ it took like 345 to 455 milliscend to check primenumebr form 1million.\n in my systeam and go took like 253 miliscend go is 2x efficient <3 ")

}
