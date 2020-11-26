// Project Euler
// Problem 20: The sum of the digits in the number 100! (factorial)

import java.math.BigInteger;

public class P020 {
    public static void main(String[] args) {
        int limit = 100;

        System.out.println(compute(limit));
    }

    public static String compute(int limit) {
		String temp = factorial(limit).toString();
		int sum = 0;
		for (int i = 0; i < temp.length(); i++)
			sum += temp.charAt(i) - '0';
		return Integer.toString(sum);
	}

    public static BigInteger factorial(int n) {
		BigInteger prod = new BigInteger("1"); // or BigInteger.ONE
		for (int i = 2; i <= n; i++)
			prod = prod.multiply(BigInteger.valueOf(i));
		return prod;
	}
}
