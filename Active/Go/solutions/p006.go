// Project Euler
// Problem 6: Find the difference between the sum of the squares of the first
//			  one hundred natural numbers and the square of the sum

package go_euler

func Problem_006(limit int) int {
	sum_of_squares := 0
	sum_squared := 0
	for i := 1; i <= limit; i++ {
		sum_of_squares += i * i
		sum_squared += i
	}

	return (sum_squared * sum_squared) - sum_of_squares
}
