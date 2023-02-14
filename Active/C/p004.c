// Project Euler
// Problem 4: The largest palindrom made from the product of
//            3 digit numbers

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool palindrome_checker(unsigned long int num) {
    // convert the integer to string
    char str[256];
    sprintf(str, "%lu", num);
    printf("the number: %s\n", str);

    int len = strlen(str);
    for (int i = 0; i < len/2; i++) {
        // the index that mirror i from the right side of the string
        int index = len - (i + 1);
        if (str[i] != str[index]) return false;
    }

    return true;
}

int main(int argc, char *argv[]) {
    // int digit = 3;
    // printf("%d\n", compute(limit));
    printf("%d\n", palindrome_checker(11311));
    printf("%d\n", palindrome_checker(12311));
    printf("%d\n", palindrome_checker(123321));

    return 0;
}
