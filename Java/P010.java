// Project Euler
// Problem 10: The sum of all prime numbers below 2000000

public class P010 {
    public static void main(String[] args) {
        int limit = 2000_000;

        System.out.println(compute(limit));
    }

    public static String compute(int limit) {
        long sum = 0;
        int[] array = new int[limit];

        for (int i = 0; i < limit; i++)
            array[i] = i + 1;

        array[0] = 0;

        // Eratosthenes' Sieve
        for (int i = 1; i < limit; i++) {
            if (array[i] != 0) {
                for (int j = 2*array[i]; j <= limit; j += array[i])
                    array[j - 1] = 0;
            }
        }

        for (int i = 0; i < limit; i++)
            sum += array[i];

        return Long.toString(sum);
    }
}
