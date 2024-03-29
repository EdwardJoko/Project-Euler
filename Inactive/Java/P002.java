// Project Euler
// Problem 2: The sum of even Fibonacci number under 4000000

public class P002 implements Solution<Integer> {
    public static void main(String[] args) {
        int limit = 4000_000;
        System.out.println(new P002().compute(limit));
    }

    public String compute(Integer limit) {
        int x = 0;  // the first  number of Fibonacci
        int y = 1;  // the second number of Fibonacci
        int temp = 0;   // temporary variable to store value
        int sum = 0;

        while (y < limit) {
            if (y % 2 == 0) sum += y;

            temp = x;
            x = y;
            y = x + temp;
        }

        return Integer.toString(sum);
    }
}
