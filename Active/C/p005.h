// Project Euler
// Problem 5: Smallest positive number that is evenly divisible
//            by all of the numbers from 1 to 20

#include <stdio.h>

unsigned long int compute005(int limit) {
    // init the array
    int array[limit];
    for (int i = 0; i < limit; i++)
        array[i] = i + 1;

    // Eliminate elements that have multipliers above itself and within the limit
    for (int i = 0; i < limit; i++) {
        for (int j = i + 1; j < limit; j++)
            if (array[j] % array[i] == 0) {
                array[i] = 0;
                break;
            }
    }

    unsigned long int num = 1;

    // Multiplying non-zero numbers in the array
    for (int i = 0; i < limit; i++) {
        if (array[i] != 0) num *= array[i];
    }

    // Brute force. Remove all the extra unnecessary factors
    for (int i = 2; i <= limit; i++) {
        // the loop is because in case num is divisible by i multiple times
        while (num % i == 0) {
            int identifier = 0;
            unsigned long int num_test = num / i;
            int j = 2;

            while (j <= limit) {
                if (num_test % j == 0) {
                    identifier += 1;
                    j += 1;
                }
                else break;
            }

            if (identifier == (limit-1))
                num = num_test;
            else break;
        }
    }

    return num;
}
