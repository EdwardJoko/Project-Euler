// Project Euler
// Problem 7: The 10001st prime number

public class P007 {
    public static void main(String[] args) {
        int n_th = 10001;
        int range = n_th * 1000;    // assumming if the n_th prime is within the range of n_th * 1000

        while (!eratosthenes_sieve(n_th, range))
            range *= 1000;  // increase the range in case we don't get the n_th prime
    }

    public static boolean eratosthenes_sieve(int n_th, int range) {
        int[] array = new int[range];

        array[0] = 0;

        // filling the array
        for (int i = 1; i < range; i++)
            array[i] = i + 1;

        // the sieve
        for (int i = 1; i < range; i++) {
            if (array[i] != 0) {
                for (int j = 2*array[i]; j <= range; j += array[i])
                    array[j - 1] = 0;
            }
        }

        // checking
        int prime_th = 0;
        int index;
        for (index = 0; index < range; index++) {
            if (array[index] != 0) prime_th += 1;
            if (prime_th == n_th) {
                System.out.println(array[index]);
                return true;
            }
        }

        return false;
    }
}
