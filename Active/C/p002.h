// Project Euler
// Problem 2: The sum of even Fibonacci number under 4000000

int compute002(int limit) {
    int x = 0;  // the first  number of Fibonacci
    int y = 1;  // the second number of Fibonacci
    int temp = 0;   // temporary variable to store value
    int sum = 0;

    while (y < limit) {
        if (y % 2 == 0) sum += y;

        temp = x;
        x = y;
        y = temp + x;
    }

    return sum;
}
