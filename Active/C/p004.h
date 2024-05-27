// Project Euler
// Problem 4: The largest palindrom made from the product of 3 digit numbers

#include "lib.h"

unsigned long int compute004(int digit) {
    unsigned long int max_num = max_num_generator(digit);
    unsigned long int min_num = min_num_generator(digit);
    unsigned long int max_product = max_num * max_num;
    unsigned long int min_product = min_num * min_num;
    // num variable is the candidate of the solution
    unsigned long int num = max_product;

    while (num > min_product) {
        if (is_palindrome(num)) {
            int divider = max_num;

            while (divider >= min_num) {
                // the extra if 'num/divider <= max_num' is necessary because
                // in case digit = 2, then 9779 is one of the palindrome that
                // generated, but, its factors are 77 and 127, where 127 is not
                // 2 digit
                if (num % divider == 0 && num/divider <= max_num) {
                    return num;
                }
                divider -= 1;
            }
        }
        num -= 1;
    }
    return -1;
}
