// Project Euler
// Problem 6: The difference between the sum of the squares of the
//            first one hundred natural numbers and the square of
//            the sum

unsigned long int compute006(int limit) {
    // sum of squares
    unsigned long int sum_of_squares = 0;

    for (int i = 1; i <= limit; i++)
        sum_of_squares += (i * i);

    // square of sum
    unsigned long int sum_of_n_integer = 0;

    for (int i = 1; i <= limit; i++)
        sum_of_n_integer += i;

    unsigned long int square_of_sum = sum_of_n_integer * sum_of_n_integer;

    return square_of_sum - sum_of_squares;
}
