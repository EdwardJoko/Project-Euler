package go_euler

import (
	"math"
	"errors"
)

// return the biggest number of n digit,
// for example the biggest number of 2 digit number is 99
func Generate_Biggest_N_Digit(digit int) (int, error) {
	if digit <= 0 {
		return 0, errors.New("Cannot generate number if the digit is 0 or less")
	}
	return int(math.Pow(10, float64(digit))) - 1, nil
}
