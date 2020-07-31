// Project Euler
// Problem 5: Smallest positive number that is evenly divisible
//            by all of the numbers from 1 to 20

#include <iostream>
using namespace std;

unsigned long int compute(int limit)
{
    int Arr[limit];     // array to store all the numbers
    for (int i = 0; i < limit; ++i) Arr[i] = i + 1; // filling the array

    // Eliminating factors that have multipliers within the limit
    for (int i = 0; i < limit; ++i) {
        for (int j = i + 1; j < limit; j++) {
            if (Arr[j] % Arr[i] == 0) {
                Arr[i] = 0;
                break;
            }
        }
    }

    unsigned long long int num = 1;

    // Multiplying non-zero numbers in the array
    for (int i = 0; i < limit; ++i) {
        if (Arr[i] != 0)
            num *= Arr[i];
    }

    // Brute force. Remove all the extra unnecessary factors
    for (int i = 2; i <= limit; ++i) {
        while (num % i == 0) {
            int identifier = 0;
            unsigned long long int num_test = num / i;
            int j = 2;
            while (j <= limit) {
                if (num_test % j == 0) {
                    identifier += 1;
                    j += 1;
                }
                else break;
            }
            if (identifier == (limit-1)) {
                num = num_test;
            }
            else break;
        }
    }

    return num;
}

int main()
{
    cout << "The smallest positive number that is evenly divisible "
         << "by all of\nthe numbers from 1 to 20." << endl;
    cout << compute(20) << endl;

    cout << "\nGive me the new integer for the new limit other than 20.\t";
    int new_limit; cin >> new_limit;
    cout << compute(new_limit) << endl;

    return 0;
}


// We can't operate a number with zero if the operator is %.
// It will causing: Floating point exception (core dumped)
