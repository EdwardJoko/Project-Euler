// Project Euler
// Problem 12: The first triangle number to have over five hundred divisors

#include <stdbool.h>
#include <stdio.h>

unsigned int divisors_counter(unsigned int num) {
    unsigned int factors = 0;
    for (unsigned int i = 1; i * i <= num; i++) {
        bool is_zero_remainder = num % i == 0;
        if (is_zero_remainder && (num / i) != i) factors += 2;
        else if (is_zero_remainder) factors += 1;
    }
    return factors;
}

int main(int argc, char **argv) {
    unsigned int divisors = 0;
    unsigned int i = 1;
    unsigned int triangle_number = 0;

    while (divisors <= 500) {
        triangle_number += i;
        divisors = divisors_counter(triangle_number);
        /*
        printf("triangle numbers: %u\n", triangle_number);
        printf("divisors: %u\n", divisors);
        */
        i += 1;
    }
    printf("%u\n", triangle_number);

    divisors = 0;
    i = 1;
    for (triangle_number = 1; divisors <= 500; triangle_number += i) {
        divisors = divisors_counter(triangle_number);
        /*
        printf("triangle numbers: %u\n", triangle_number);
        printf("divisors: %u\n", divisors);
        */
        i += 1;
    }
    printf("%u\n", triangle_number - i);

    return 0;
}
