// Don't know if it's the best practice, but whatever

#include <stdio.h>
#include <stdbool.h>

bool test(char str[], unsigned long int result, unsigned long int answer) {
    if (result ==  answer) {
        printf("Solution for problem %s is correct.\n", str);
    } else {
        printf("Solution for problem %s is INCORRECT.\n", str);
        printf("\tExpected: %lu\n\tReceived: %lu\n", answer, result);
    }
}
