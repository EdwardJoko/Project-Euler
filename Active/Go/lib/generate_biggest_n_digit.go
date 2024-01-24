package go_euler

import "math"

// return the biggest number of n digit,
// for example the biggest number of 2 digit number is 99
func Generate_Biggest_N_Digit(digit int) int {
	return int(math.Pow(10, float64(digit))) - 1
}
