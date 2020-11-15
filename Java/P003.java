// Project Euler
// Problem 3: The largest prime factor of 600851475143

public class P003 {
    public static void main(String[] args) {
        long limit = 600_851_475_143L;

        System.out.println(compute(limit));
    }

    public static String compute(long limit) {
        long i = 2L;
        long factor = i;

        while (i * i <= limit) {
            if (limit % i != 0) {
                i += 1;
                continue;
            }
            while (limit % i == 0) {
                limit /= i;
            }
            factor = i;
        }

        if (factor > limit) return Long.toString(factor);
        else return Long.toString(limit);
    }
}