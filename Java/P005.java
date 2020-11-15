// Project Euler
// Problem 5: Smallest positive number that is evenly divisible
//            by all of the numbers from 1 to 20

public class P005 {
    public static void main(String[] args) {
        int limit = 20;

        System.out.println(compute(20));
    }

    public static long compute(int limit) {
        int[] Arr = new int[limit];
        for (int i = 0; i < limit; i++)
            Arr[i] = i + 1;

        // Eliminating factor that have multipliers within the limit
        for (int i = 0; i < limit; i++) {
            for (int j = i + 1; j < limit; j++)
                if (Arr[j] % Arr[i] == 0) {
                    Arr[i] = 0;
                    break;
                }
        }

        long num = 1L;

        // Multiplying non-zero numbers in the array
        for (int i = 0; i < limit; i++) {
            if (Arr[i] != 0)
                num *= Arr[i];
        }

        // Brute force. Remove all the extra unnecessary factors
        for (int i = 2; i <= limit; ++i) {
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
                if (identifier == (limit-1)) {
                    num = num_test;
                }
                else break;
            }
        }
        return num;
    }
}
