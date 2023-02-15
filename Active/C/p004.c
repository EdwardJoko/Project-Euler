// Project Euler
// Problem 4: The largest palindrom made from the product of
//            3 digit numbers

#include <stdio.h>
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
    unsigned long int maxNum = 0;
    for (int i = 0; i < digit; i++)
        maxNum += 9 * (int)pow(10, i);
    return maxNum;
}

// generate the minimum number of n digit. if digit is 3, than the maxNum is 100
unsigned long int min_num_generator(int digit) {
    unsigned long int minNum = (int)pow(10, digit - 1);
    return minNum;
}

int compute(int digit) {
    unsigned long int maxNum = max_num_generator(digit);
    unsigned long int maxProduct = maxNum * maxNum;

    while (maxProduct > 0) {
        if (is_palindrome(maxProduct)) {
            int divider = maxNum;
            int minNum = min_num_generator(digit);

            while (divider >= minNum) {
                if (maxProduct % divider == 0 && maxProduct/divider <= maxNum) {
                    return maxProduct;
                }
                divider -= 1;
            }
        }
        maxProduct -= 1;
    }
    return -1;
}

int main(int argc, char *argv[]) {
    int digit = 2;
    printf("%d\n", compute(digit));
    digit = 3;
    printf("%d\n", compute(digit));

    return 0;
}
