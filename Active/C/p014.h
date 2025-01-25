// Project Euler
// Problem 14: Longest Collatz sequence under one million

#include <stdlib.h>

unsigned int compute014(unsigned int limit) {
    // declare the array, read the link for why declaring it with malloc
    // https://stackoverflow.com/a/19778812
    unsigned int* arr;
    arr = (unsigned int*)malloc(limit * sizeof(unsigned int));
    // initialized the value of the array to be 0, so we can use it as reference
    // for optimization, and also because C doesn't initialize array value to 0
    for (int i = 0; i < limit; i++) arr[i] = 0;

    // i is for indexing of the array above
    // what we store at index i in the array is num that is num = i + 1
    // so the value at index 0 is 1
    for (int i = 0; i < limit; i++) {
        // i + 1, because of our indexing, at index 0, we put number 1
        unsigned int num = i + 1;
        // counter value starts from number 1, because the number itself is
        // part of the chain
        int counter = 1;
        while (num != 1) {
            // if the value at array at index num-1 is not 0, then the chain is
            // already calculated before, so we optimize it with this if
            // benchmark:
            //  after optimization : 0,02s user 0,00s system 96% cpu 0,023 total
            //  before optimization: 0,30s user 0,00s system 99% cpu 0,301 total
            if ((num - 1) < limit && arr[num - 1] != 0) {
                counter += arr[num - 1];
                break;
            }

            // do the Collatz operation
            if (num % 2 == 0) num /= 2;
            else num = num * 3 + 1;
            counter += 1;
        }
        arr[i] = counter;
    }

    int index = 0;
    unsigned int longest = 0;
    for (int i = 1; i < limit; i++) {
        if (arr[i] > longest) {
            longest = arr[i];
            index = i + 1;
        }
    }

    return index;
}
