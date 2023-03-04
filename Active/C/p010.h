// Project Euler
// Problem 10: The sum of all prime numbers below 2000000

#include <stdlib.h>
#include "lib.h"

unsigned long long int compute010(unsigned long int limit) {
    // declare the array, read the link for why declaring it with malloc
    // https://stackoverflow.com/a/19778812
    unsigned long int* arr;
    arr = (unsigned long int*)malloc(limit * sizeof(unsigned long int));

    // from lib.h
    eratosthenes_sieve(limit, arr);

    unsigned long long int sum = 0;
    for (unsigned long int i = 0; i < limit; i++)
        sum += arr[i];

    return sum;
}
