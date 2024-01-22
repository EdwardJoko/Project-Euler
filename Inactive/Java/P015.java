// Project Euler
// Problem 15: How many such routes are there through a 20×20 grid

import java.math.BigInteger;

public class P015 {
    public static void main(String[] args) {
        int grid = 20;

        System.out.println(compute(grid));
    }

    public static String compute(int grid) {
        BigInteger routes = new BigInteger("0");

        routes = combination(2 * grid, grid);

        return routes.toString();
    }

    public static BigInteger combination(int upper, int lower) {
        BigInteger numerator = factorial(upper);
        BigInteger divisor = factorial(upper - lower).multiply(factorial(lower));

        BigInteger num = numerator.divide(divisor);

        return num;
    }

    public static BigInteger factorial(int n) {
		BigInteger prod = new BigInteger("1"); // or BigInteger.ONE
		
        for (int i = 2; i <= n; i++)
			prod = prod.multiply(BigInteger.valueOf(i));

		return prod;
	}
}
