// Project Euler
// Problem 14: Integer that produces longest Collatz sequence
//             chain below 1000000

public class P014 {
    public static void main(String[] args) {
        int limit  = 1000000;

        System.out.println(compute(limit));
    }

    public static String compute(int limit) {
        long chain;
        long longest_chain = 0L;
        long[] array = new long[limit];
        long j = 0L;
        long num = 0L;
        int index;

        for (long i = 1; i < limit; i++) {
            chain = 1; // reset the number of the chain
            j = i;

            // count the Collatz sequence
            while (j != 1) {
                if (j < i) { // memoization
                    index = (int)j - 1;
                    chain += array[index];
                    break;
                }
                else if (j % 2 == 0)
                    j /= 2;
                else
                    j = (j * 3) + 1;

                chain += 1;
            }

            // memoization
            // we store the number of chain of i = 1 at index = 0, and so on
            index = (int)i - 1;
            array[index] = chain; 

            if (chain > longest_chain) {
                longest_chain = chain;
                num = i;
            }
        }

        return Long.toString(num);
    }

}
