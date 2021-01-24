// Project Euler
// Problem 23: The sum of all positive integers which cannot be
//             written as the sum of two abundant numbers

public class P023 {
    public static void main(String[] args) {
        int limit = 28123;

        // long start = System.currentTimeMillis();

        System.out.println(compute(limit));

        // long finish = System.currentTimeMillis();
        // System.out.println((finish - start) + " second");
    }

    public static String compute(int limit) {
        int sum = 0;
        int[] all_num = new int[limit];    // all numbers
        int[] prime_num = new int[limit];  // prime numbers
        int[] temp_abundant_num = new int[limit];   // abundant numbers

        // filling the array
        for (int i = 0; i < limit; i++) {
            all_num[i] = i + 1;
            prime_num[i] = i + 1;
            temp_abundant_num[i] = 0;
        }

        // Eratosthenes' sieve
        // because prime numbers are not abundant number
        prime_num[0] = 0;
        for (int i = 0; i < limit; i++) {
            if (prime_num[i] != 0) {
                for (int j = 2*prime_num[i]; j < limit; j += prime_num[i])
                    prime_num[j - 1] = 0;
            }
        }

        // second sieve, list all the abundant numbers below 1000,
        // because the double of an abundant number is also an abundant
        // number
        for (int i = 0; i < 1000; i++) {
            int sum_of_factors = 0;
            int num = all_num[i];
            if (prime_num[i] == 0) { // only checknon-prime number
                if (num % 2 == 0) {
                    for (int j = 1; j < num/2; j++) {
                        if (num % j == 0) sum_of_factors += j;
                    }
                    if (sum_of_factors > num/2)
                         temp_abundant_num[i] = num;
                } else {
                    for (int j = 1; j < num/2; j++) {
                        if (num % j == 0) sum_of_factors += j;
                    }
                    if (sum_of_factors > num)
                         temp_abundant_num[i] = num;
                }
            }
        }

        // list all the double of abundant numbers that we just listed above
        for (int i = 0; i < 1000; i++) {
            if (temp_abundant_num[i] != 0) {
                for (int j = temp_abundant_num[i]; j < limit; j *= 2)
                    temp_abundant_num[j - 1] = j;
            }
        }

        // last step: brute force to list all abundant numbers
        for (int i = 0; i < limit; i++) {
            int primeNum = prime_num[i];
            int abundantNum = temp_abundant_num[i];
            int num = all_num[i];
            int sum_of_factors = 0;
            if (primeNum == 0 && abundantNum == 0) { // only check non-prime numbers and abundant number that is not yet listed
                if (num % 2 == 0) {
                    for (int j = 1; j < num/2; j++) {
                        if (num % j == 0) sum_of_factors += j;
                    }
                    if (sum_of_factors > num/2)
                        temp_abundant_num[i] = num;
                } else {
                    for (int j = 1; j < num/2; j++) {
                        if (num % j == 0) sum_of_factors += j;
                    }
                    if (sum_of_factors > num)
                        temp_abundant_num[i] = num;
                }
            }
        }

        int non_zero = 0;
        for (int i = 0; i < limit; i++) {
            if (temp_abundant_num[i] != 0) {
                non_zero += 1 ;
            }
        }

        int[] all_abund_num = new int[non_zero];
        int index = 0;
        for (int i = 0; i < limit; i++) {
            if (temp_abundant_num[i] != 0) {
                all_abund_num[index] = temp_abundant_num[i];
                index += 1;
            }
        }

        index = 0;
        for (int i = 0; i < non_zero; i++) {
            for (int j = i; all_abund_num[i] + all_abund_num[j] - 1 < limit; j++) { // -1 because index start from 0
                index = all_abund_num[i] + all_abund_num[j] - 1;
                all_num[index] = 0;
            }
        }

        for (int i = 0; i < limit; i++) {
            if (all_num[i] != 0)
                sum += all_num[i];
        }

        return Integer.toString(sum);
    }
}

// Nayuki has better and faster solution in his github
