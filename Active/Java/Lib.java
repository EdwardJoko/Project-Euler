public class Lib {
    // return an array of primes under the (limit+1)
    public int[] eratosthenes_sieve(int limit) {
        if (limit <= 1) {
            int[] empty = {};
            return empty;
        }

        // create an array with element from 0 to limit
        int[] nums = new int[limit + 1];
        for (int i = 0; i <= limit; i++) 
            nums[i] = i;

        // 1 is not prime
        nums[1] = 0;

        // eliminate non-prime numbers from the array with Eratosthenes's
        // sieve
        int nonZero = limit + 1; // the amount of non-zero numbers in array
        for (int i = 0; i <= limit; i++) {
            // skip already eliminated numbers
            if (nums[i] == 0) {
                nonZero -= 1;
                continue;
            }

            for (int j = nums[i] * 2; j <= limit; j += nums[i])
                nums[j] = 0;
        }

        // create new element that just include non-zero number from the
        // nums array, or just only the primes
        int[] primes = new int[nonZero];
        for (int i = 0, j = 0; i <= limit; i++) {
            if (nums[i] != 0) {
                primes[j] = nums[i];
                j += 1;
            }
        }

        return primes;
    }

    // to check if a number is a prime or not
    public boolean is_prime(int number) {
        if (number <= 1) return false;

        for (int i = 2; (i * i) <= number; i++) {
            if (number % i == 0) return false;
        }

        return true;
    }
}
