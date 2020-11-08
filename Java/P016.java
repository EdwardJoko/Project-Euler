import java.math.BigInteger;

// Project Euler
// Problem 16: The sum of the digits of the number 2 powered by 1000

public class P016 {
    public static void main(String[] args) {
        int power = 1000;

        System.out.println(compute(power));
    }

    public static String compute(int limit) {
        BigInteger one = new BigInteger("1");
        String temp = one.shiftLeft(1000).toString();

        int i = 0;
        int sum = 0;
        while (i < temp.length()) {
            sum += temp.charAt(i) - '0';
            i += 1;
        }

        return Integer.toString(sum);
    }

    // another method that in case straightforward way is not working or too long
    public static String compute_complex(int limit) {

    }
}
