// Project Euler
// Problem 9: a, b, c, are a Pythagorean triplet. If a + b + c = 1000
//            Find the product of abc

package go_euler

func Problem_009(sum_of_all int) int {
    // minus 2 because b, c first value are at least 1
	for a := (sum_of_all - 2); a > 1; a-- {
		// (sum_of_all - a) divided by 2 because at that point we are just
		// going to assign value that already own by b to c
		for b := 1; b <= (sum_of_all - a)/2; b++ {
			c := sum_of_all - a - b
            if (a*a) == (b*b) + (c*c) {
                return a * b * c;
			}
        }
    }

    return -1;
}
