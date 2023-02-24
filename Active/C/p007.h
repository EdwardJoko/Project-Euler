// Project Euler
// Problem 7: The 10001st prime number

#include "lib.h"

int compute007(int limit) {
    int prime_th = 0;
    int i = 0; // iterator variable

    for (; prime_th != limit; i++) {
        if (is_prime(i)) prime_th += 1;
    }

    // minus 1 because, i is getting added before the for loop stop
    return (i - 1);
}
