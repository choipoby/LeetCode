package main

import (
	"fmt"
)

func findIndex(input []int, target int) []int {
	var hash map[int]int
	var result []int
	// map needs initialization always!
	hash = make(map[int]int)
	for i, element := range input {
		hash[element] = i
		fmt.Printf("hash[%d] = %d\n", element, i)
	}

	for _, element := range input {
		if val, ok := hash[target-element]; ok {
			result = append(result, val)
		}
	}
	return result
}

func main() {
	fmt.Println("hello world")
	input := []int{2, 7, 11, 15}
	target := 9
	fmt.Println(findIndex(input, target))
}
