// Project Euler
// Problem 3: The largest prime factor of 600_851_475_143

package go_euler

func Problem_003(limit int) int {
	// 2 is the first prime that we use to factor the limit
	factor := 2
	biggest_factor := 0

	for factor*factor <= limit {
		if limit%factor != 0 {
			factor += 1
			continue
		}

		for limit%factor == 0 {
			limit /= factor
		}

		biggest_factor = factor
		factor += 1
	}

	if limit > biggest_factor {
		return limit
	}
	return biggest_factor
}
