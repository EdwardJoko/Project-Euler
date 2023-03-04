#ifndef LIB_H
#define LIB_H

// to check if a number is a prime or not
bool is_prime(unsigned long int number) {
    if (number <= 1) return false;

    for (unsigned long int i = 2; (i * i) <= number; i++) {
        if (number % i == 0) return false;
    }

    return true;
}

// return an array with element from 0 to limit but replacing non-prime number as 0
void eratosthenes_sieve(unsigned long int limit, unsigned long int* arr) {
    if (limit <= 1) return ;

    // fill the array with element from 0 to limit
    for (unsigned long int i = 0; i <= limit; i++)
        arr[i] = i;

    // 1 is not prime
    arr[1] = 0;

    // eliminate non-prime numbers from the array with Eratosthenes's
    // sieve
    unsigned long int nonZero = limit + 1; // the amount of non-zero numbers in array
    for (unsigned long int i = 0; i <= limit; i++) {
        // skip already eliminated numbers
        if (arr[i] == 0) {
            nonZero -= 1;
            continue;
        }

        for (unsigned long int j = arr[i] * 2; j <= limit; j += arr[i])
            arr[j] = 0;
    }
}

#endif
