// Project Euler
// Problem 10: The sum of all prime numbers below 2000000

public class P010 implements Solution<Integer> {
    public static void main(String[] args) {
        int limit = 2000_000;
        System.out.println(new P010().compute(limit));
    }

    public String compute(Integer limit) {
        Lib lib = new Lib();
        int[] array = lib.eratosthenes_sieve(limit);

        long sum = 0;
        int len = array.length;
        for (int i = 0; i < len; i++)
            sum += array[i];

        return Long.toString(sum);
    }
}
