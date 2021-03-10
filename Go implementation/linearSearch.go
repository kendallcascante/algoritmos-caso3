package main

import (
	"fmt"
	"log"
	"math/rand"
	"time"
)

const ARRAY_LENGHT int = 500000
const MAX_RANDOM = 100000
const MIN_RANDOM = 1

func linearSearch(value int, array [ARRAY_LENGHT]int) bool {
	found := false
	for index := 0; index < len(array); index++ {
		fmt.Println(" ")
		if array[index] == value {
			found = true
			break
		}
	}
	return found
}

func main() {
	start := time.Now()
	var array [ARRAY_LENGHT]int

	for index := 0; index < len(array); index++ {
		array[index] = (rand.Intn(MAX_RANDOM-MIN_RANDOM) + MIN_RANDOM)
	}

	if linearSearch(200000, array) {
		fmt.Println("Element was found :)")
	} else {
		fmt.Println("Element wasn´t found :(")
	}

	end := time.Since(start)
	log.Printf("Linear search took %s", end)
}
