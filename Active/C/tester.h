// Don't know if it's the best practice, but whatever

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void test(char str[], unsigned long long int result, unsigned long long int answer) {
    if (result == answer) {
        printf("Solution for problem %s is correct.\n", str);
    }
    else {
        printf("Solution for problem %s is INCORRECT.\n", str);
        printf("\tExpected: %llu\n\tReceived: %llu\n", answer, result);
    }
}

void testStr(char str[], char * result, char * answer) {
    // strcmp return 0 if both string are the same
    if (!strcmp(result, answer)) {
        printf("Solution for problem %s is correct.\n", str);
    }
    else {
        printf("Solution for problem %s is INCORRECT.\n", str);
        printf("\tExpected: %s\n\tReceived: %s\n", answer, result);
    }
}
