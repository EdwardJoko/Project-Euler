// Project Euler
// Problem 5: Smallest positive number that is evenly divisible
//            by all of the numbers from 1 to 20

public class P005 implements Solution<Integer> {
    public static void main(String[] args) {
        int limit = 20;
        System.out.println(new P005().compute(limit));
    }

    public String compute(Integer limit) {
        // init the array
        int[] array = new int[limit];
        for (int i = 0; i < limit; i++)
            array[i] = i + 1;

        // Eliminate factors that have multipliers above itself and within the limit
        for (int i = 0; i < limit; i++) {
            for (int j = i + 1; j < limit; j++)
                if (array[j] % array[i] == 0) {
                    array[i] = 0;
                    break;
                }
        }

        long num = 1L;

        // Multiplying non-zero numbers in the array
        for (int i = 0; i < limit; i++) {
            if (array[i] != 0) num *= array[i];
        }

        // Brute force. Remove all the extra unnecessary factors
        for (int i = 2; i <= limit; i++) {
            // the loop is because in case num is divisible by i multiple times
            while (num % i == 0) {
                int identifier = 0;
                long num_test = num / i;
                int j = 2;

                while (j <= limit) {
                    if (num_test % j == 0) {
                        identifier += 1;
                        j += 1;
                    }
                    else break;
                }

                if (identifier == (limit-1))
                    num = num_test;
                else break;
            }
        }

        return Long.toString(num);
    }
}
