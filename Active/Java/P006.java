// Project Euler
// Problem 6: The difference between the sum of the squares of the
//            first one hundred natural limitbers and the square of
//            the sum

public class P006 implements Solution<Integer> {
    public static void main(String[] args) {
        int limit = 100;
        System.out.println(new P006().compute(limit));
    }

    public String compute(Integer limit) {
        // sum of squares
        int sum_of_squares = 0;

        for (let i = 1; i <= limit; i++)
            sum_of_squares += (i * i);

        // square of sum
        int sum_of_n_integer = 0;

        for (let i = 1; i <= limit; i++)
            sum_of_n_integer += i;

        int square_of_sum = sum_of_n_integer * sum_of_n_integer;

        return Integer.toString(square_of_sum - sum_of_squares);
    }
}
