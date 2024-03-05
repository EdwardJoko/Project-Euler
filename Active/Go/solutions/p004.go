// Project Euler
// Problem 4: The largest palindrome made from the product of two
//			  3-digit numbers

package go_euler

import (
	"go_euler/lib"
	"strconv"
)

// The algorithm is (probably) more complicated than the one that I
// wrote with C, TS, and Python. But it's purposely so because I want
// to solve the problem with this algorithm.
// The algorithm goes like this, let say the digit is 2, then we
// multiply 99(=factor_1) with 99-90(=factor_2), and then 98 multiply
// it also with 99-90(=factor_2), and so on. If the value of factor_1
// is arrived at 89, then we will multiply it with 89-80, and so on.
// The algorithm is not guaranteed to be correct, because at some digit
// the solution probably is the result of the product of 9* multiply
// with 8*. But when the result is tested against the other algorithm
// that I wrote with C, the solution is still holds true until 6 digit.
// After that the other algorithm becomes too slow and it took a really
// long time to print the solution.
func Problem_004(digit int) string {
	product := ""
	smallest_n_digit := go_euler.Generate_Smallest_N_Digit(digit)
	biggest_n_digit := go_euler.Generate_Biggest_N_Digit(digit)

	factor_1 := biggest_n_digit
	for step := 1; step < 10; step += 1 {
		for factor_1 >= biggest_n_digit-(smallest_n_digit*step)+1 {
			factor_2 := biggest_n_digit - (smallest_n_digit * (step - 1))
			for factor_2 >= biggest_n_digit-(smallest_n_digit*step)+1 {
				product = strconv.Itoa(factor_1 * factor_2)

				if go_euler.IsPalindrome(product) {
					return product
				}
				factor_2 -= 1
			}
			factor_1 -= 1
		}
	}

	return "No palindrome product is found."
}
