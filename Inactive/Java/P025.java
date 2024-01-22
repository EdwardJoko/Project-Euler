// Project Euler
// Problem 25: The first term in the Fibonacci sequence to contain 1000 digits

import java.math.BigInteger;

public class P025 {
    public static void main(String[] args) {
        int digits = 1000;

        System.out.println(compute(digits));
    }

    public static String compute(int digits) {
        BigInteger x = new BigInteger("1"); // first Fibonacci
        BigInteger y = new BigInteger("1"); // second Fibonacci
        BigInteger temp; // temp variable
        int length = 0;

        int index = 2;
        String xString, yString;
        while (length != digits) {
            xString = x.toString();
            temp = new BigInteger(xString);
            yString = y.toString();
            x = new BigInteger(yString);

            y = x.add(temp);
            index += 1;
            
            length = y.toString().length();
        }

        return Integer.toString(index);
    }
}

// Look at Nayuki's solution.
// The algorithm is much better and not brute force.
