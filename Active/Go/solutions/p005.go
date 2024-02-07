// Project Euler
// Problem 5: Smallest positive number that is evenly divisible
//            by all of the numbers from 1 to 20

package go_euler

func Problem_005(limit int) int {
	// init the array
	var numbers = make([]int, limit)
	for i := 1; i <= limit; i++ {
		numbers[i-1] = i
	}

	// Eliminate elements that have multipliers above itself but still within
	// the limit
	for i := 0; i < limit; i++ {
		for j := i + 1; j < limit; j++ {
			if numbers[j]%numbers[i] == 0 {
				numbers[i] = 0
				break
			}
		}
	}

	product := 1
	// Multiplying non-zero numbers in the array
	for i := 0; i < limit; i++ {
		if numbers[i] != 0 {
			product *= numbers[i]
		}
	}

	// Brute force. Remove all the extra unnecessary factors
	for i := 2; i <= limit; i++ {
		// the loop is because in case product is divisible by i multiple times
		for product%i == 0 {
			identifier := 0
			product_test := product / i

			for j := 2; j <= limit; j++ {
				if product_test%j == 0 {
					identifier += 1
				} else {
					break
				}
			}

			if identifier == (limit - 1) {
				product = product_test
			} else {
				break
			}
		}
	}

	return product
}
