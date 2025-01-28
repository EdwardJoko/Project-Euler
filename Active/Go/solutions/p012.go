// Project Euler
// Problem 12: The first triangle number to have over five hundred divisors

package go_euler

func divisors_counter(num int) int {
	factors := 0
	for i := 1; i*i <= num; i++ {
		is_zero_remainder := num%i == 0
		if is_zero_remainder && (num/i) != i {
			factors += 2
		} else if is_zero_remainder {
			factors += 1
		}
	}
	return factors
}

func Problem_012(divisors_limit int) int {
	divisors := 0
	i := 1
	triangle_number := 0
	for divisors <= divisors_limit {
		triangle_number += i
		divisors = divisors_counter(triangle_number)
		i += 1
	}
	return triangle_number
}
