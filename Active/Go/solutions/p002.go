// Project Euler
// Problem 2: The sum of even Fibonacci sequence below 4_000_000

package go_euler

func Problem_002(limit int) int {
	sum := 0
	// the first 2 number of the Fibonacci
	var x, y int = 1, 2
	// temporarry variable to store intermediate value
	var temp int = 0

	for y < limit {
		if y%2 == 0 {
			sum += y
		}

		temp = x
		x = y
		y = temp + x
	}

	return sum
}
