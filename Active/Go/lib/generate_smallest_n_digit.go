package go_euler

import "math"

// return the smallest number of n digit,
// for example the smallest number of 2 digit number is 10
func Generate_Smallest_N_Digit(digit int) int {
	return int(math.Pow(10, float64(digit - 1)))
}
