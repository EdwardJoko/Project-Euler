// Project Euler
// Problem 10: The sum of all prime numbers below 2_000_000

package go_euler

import "go_euler/lib"

func Problem_010(limit int) int {
	numbers := go_euler.Eratosthenes_Sieve(limit)

	sum_of_primes := 0;
	for _, number := range numbers {
		sum_of_primes += number
	}

	return sum_of_primes
}
