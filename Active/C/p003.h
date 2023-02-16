// Project Euler
// Problem 3: The largest prime factor of 600851475143

#include <stdio.h>

unsigned long int compute003(unsigned long int limit) {
    unsigned long int i = 2;
    unsigned long int factor = i;

    while (i * i <= limit) {
        if (limit % i != 0) {
            i += 1;
            continue;
        }
        
        while (limit % i == 0)
            limit /= i;

        factor = i;
    }

    return factor > limit ? factor : limit;
}
