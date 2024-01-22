// Project Euler
// Problem 1: The sum of multiple of 3 or 5 below 1000

package go_euler

func Problem_001(limit int) int {
	sum := 0
	for i := 0; i < limit; i++ {
		if i%3 == 0 || i%5 == 0 {
			sum += i
		}
	}
	return sum
}
