// Project Euler
// Problem 7: The 10001st prime number

public class P007 {
    public static void main(String[] args) {
        int limit = 10001;
        int size = limit * 1000;

        while (!eratosthenes_sieve(limit, size))
            size *= 1000;
    }

    public static boolean eratosthenes_sieve(int limit, int size) {
        int[] array = new int[size];

        array[0] = 0;

        // filling the array
        for (int i = 1; i < size; i++) {
            array[i] = i + 1;
        }

        // the sieve
        for (int i = 1; i < size; i++) {
            if (array[i] != 0) {
                for (int j = 2*array[i]; j <= size; j += array[i])
                    array[j - 1] = 0;
            }
        }

        // checking
        int prime_th = 0;
        int index;
        for (index = 0; index < size; index++) {
            if (array[index] != 0) prime_th += 1;
            if (prime_th == limit) break;
        }

        if (prime_th == limit) {
            System.out.println(array[index]);
            return true;
        }
        return false;
    }
}
