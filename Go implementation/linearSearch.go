package main

import "fmt"
import "math/rand"

const ARRAY_LENGHT int = 100000
const MAX_RANDOM = 100000
const MIN_RANDOM = 1

func linearSearch(value int, array[ARRAY_LENGHT] int) bool {
    found := false
    for index:=0; index<len(array); index++ { 
        if(array[index]==value) {
            found = true;
            break;
        }
    }
    return found;
}

func main() {
	var array[ARRAY_LENGHT]int
	
	for index:=0; index<len(array); index++ {
		array[index] = (rand.Intn(MAX_RANDOM-MIN_RANDOM)+MIN_RANDOM)
	}
	
	if linearSearch(200000, array) {
		fmt.Println("Element was found :)")
	} else {
		fmt.Println("Element wasn´t found :(")
	}
}
