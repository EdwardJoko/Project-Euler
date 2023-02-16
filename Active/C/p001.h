// Project Euler
// Problem 1: The sum of multiple of 3 or 5 below 1000

#include <stdio.h>

int compute001(int limit) {
    int num = 1;
    int sum = 0;

    while (num < limit) {
        if (num % 3 == 0 || num % 5 == 0) {
            sum += num;
        }

        num += 1;
    }

    return sum;
}
