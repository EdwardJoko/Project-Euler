// Project Euler
// Problem 1: The sum of multiple of 3 or 5 below 1000

int compute001(int limit) {
    int sum = 0;
    for (int num = 1; num < limit; num++) {
        if (num % 3 == 0 || num % 5 == 0) {
            sum += num;
        }
    }
    return sum;
}
