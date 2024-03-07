package go_euler

// return an array with element from 0 to limit but replacing non-prime number
// with 0
func Eratosthenes_Sieve(limit int) []int {
	if limit <= 1 {
		return []int{0}
	}

	var numbers = make([]int, limit + 1)
	// fill the array with element from 0 to limit
	for i := 0; i <= limit; i++ {
		numbers[i] = i
	}
	// 1 is not prime
	numbers[1] = 0

	// the amount of non-zero numbers in array, or the amount of prime numbers
	nonZero := limit + 1
	// eliminate non-prime numbers from the array with Eratosthenes' sieve
	for i := 0; i <= limit; i++ {
		// ^ we can do optimization by stopping the loop at i*i <= limit, but then
		// nonZero would have inaccurate value
		// skip already eliminated numbers
		if numbers[i] == 0 {
			nonZero -= 1
			continue
		}

		for j := numbers[i] * 2; j <= limit; j += numbers[i] {
			numbers[j] = 0
		}
	}

	return numbers
}
