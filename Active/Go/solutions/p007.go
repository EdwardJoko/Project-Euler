// Project Euler
// Problem 7: The 10_001st prime number

package go_euler

import "go_euler/lib"

func Problem_007(limit int) int {
	prime_th := 0

	i := 1
	for ; prime_th != limit; i++ {
		if go_euler.IsPrime(i) {
			prime_th += 1
		}
	}

    // minus 1 because, i is getting added before the for loop stop
    return (i - 1);
}
