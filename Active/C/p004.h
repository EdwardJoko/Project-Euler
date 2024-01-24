// Project Euler
// Problem 4: The largest palindrom made from the product of
//            3 digit numbers

#include <stdbool.h>
#include <string.h>
#include <math.h> // README! add " -lm" when compiling this file

bool is_palindrome(unsigned long int num) {
    // convert the integer to string
    char str[256];
    sprintf(str, "%lu", num);

    // test if the string is palindrome
    int len = strlen(str);
    for (int i = 0; i < len/2; i++) {
        // the index that mirror i from the right side of the string
        int index = len - (i + 1);
        if (str[i] != str[index]) return false;
    }
    return true;
}

// generate the maximum number of n digit. if digit is 3, than the maxNum is 999
unsigned long int max_num_generator(int digit) {
    unsigned long int max_num = 0;
    for (int i = 0; i < digit; i++) max_num += 9 * (int)pow(10, i);
    return max_num;
}

// generate the minimum number of n digit. if digit is 3, than the maxNum is 100
unsigned long int min_num_generator(int digit) {
    unsigned long int min_num = (int)pow(10, digit - 1);
    return min_num;
}

unsigned long int compute004(int digit) {
    unsigned long int max_num = max_num_generator(digit);
    unsigned long int min_num = min_num_generator(digit);
    unsigned long int max_product = max_num * max_num;
    unsigned long int min_product = min_num * min_num;

    while (max_product > min_product) {
        if (is_palindrome(max_product)) {
            int divider = max_num;

            while (divider >= min_num) {
                if (max_product % divider == 0 && max_product/divider <= max_num) {
                    return max_product;
                }
                divider -= 1;
            }
        }
        max_product -= 1;
    }
    return -1;
}
