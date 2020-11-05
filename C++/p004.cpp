// Project Euler
// Problem 4: The largest palindrome made from the product of two
//            3-digit numbers

// My algorithm (the first one) is faster than the brute force
// approach (the second one). But, I don't know if I optimized
// both of them equally.
// My algorithm start to fail when the digit is bigger than 5.
// I think it's because the number is so big so it becomes out
// of the scope of 'int' data type.

#include <iostream>
#include <string>   // so I can convert int to string
#include <cmath>    // so I can have power function
using namespace std;

int palindrome_checker(string num_str)
{
    int size = 0;
    while (num_str[size]) size += 1;    // counting the length of the string

    int identifier = 0;
    for (int i = 0; i < size/2; ++i) {
        if (num_str[i] == num_str[size-1-i])
            identifier += 1;
    }

    if (identifier == size/2) return 1;
    else return 0;
}

// First algorithm
// We check from the biggest posible result of n-digits product if it's is
// a palindrome then we find if it has any factor of n-digit number
unsigned long int *palindrome_generator(int length_of_digit)
{
    static unsigned long int ans[3] = {0, 0, 0};  // array to store the answer
    string num_str = "";

    for (int i = 0; i < length_of_digit; ++i) num_str += "9";

    unsigned long int num = stoi(num_str) * stoi(num_str);

    unsigned long int first_divider = stoi(num_str);
    unsigned long int last_divider  = pow(10, length_of_digit - 1);

    // int bottom_limit = pow(10, (num_length-1)*2);
    unsigned long int bottom_limit = last_divider * last_divider; // easier than above

    while (num >= bottom_limit) {
        if (palindrome_checker(to_string(num))) {
            for (int i = first_divider; i >= last_divider; --i) {
                if (num % i == 0) {
                    ans[0] = num;
                    ans[1] = i;
                    ans[2] = num / i;
                    break;
                }
            }
        }
        if (ans[2] < first_divider && ans[2] > last_divider) break;
        num -= 1;
    }

    return ans;
}

// Second algorithm, brute force
unsigned long int *second_generator(int length_of_digit)
{
    static unsigned long int ans2[3] = {0, 0, 0};
    string num_str = "";

    for (int i = 0; i < length_of_digit; ++i) num_str += "9";
    unsigned long int num = stoi(num_str);

    unsigned long int last_divider = pow(10, length_of_digit - 1);

    ans2[0] = 0;
    for (unsigned long int i = num; i > last_divider; --i) {
        for (unsigned long int j = num; j > last_divider; --j) {
            if (palindrome_checker(to_string(i * j)) && i * j > ans2[0]) {
                ans2[0] = i * j;
                ans2[1] = i;
                ans2[2] = j;
                break;
            }
        }
        // if (ans[0] != -1) break; // should commenting this out
        // because the first palindrome that I got from this method
        // is not the biggest one
    }

    return ans2;
}

int main()
{
    int digit = 3;
    cout << "The largest palindrome made from the product of two\n"
         << "3-digit numbers.";

    unsigned long int *ans = palindrome_generator(digit);
    cout << "\nThe first algorithm,\n";
    cout << "The Palindrome    : " << ans[0] << endl;
    cout << "First multiplier  : " << ans[1] << endl;
    cout << "Second multiplier : " << ans[2] << endl;

    unsigned long int *ans2 = second_generator(digit);
    cout << "\nThe second algorithm,\n";
    cout << "The Palindrome    : " << ans2[0] << endl;
    cout << "First multiplier  : " << ans2[1] << endl;
    cout << "Second multiplier : " << ans2[2] << endl;

    cout << "\nHow many digit that you want as the factor of the\n"
         << "palindrome?\n";
    int new_digit; cin >> new_digit;

    ans = palindrome_generator(new_digit);
    cout << "\nThe first algorithm,\n";
    cout << "The Palindrome    : " << ans[0] << endl;
    cout << "First multiplier  : " << ans[1] << endl;
    cout << "Second multiplier : " << ans[2] << endl;

    unsigned long int *ans3 = second_generator(new_digit);
    cout << "\nThe second algorithm,\n";
    cout << "The Palindrome    : " << ans3[0] << endl;
    cout << "First multiplier  : " << ans3[1] << endl;
    cout << "Second multiplier : " << ans3[2] << endl;


    return 0;
}
