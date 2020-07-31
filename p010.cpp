// Project Euler
// Problem 10: The sum of all prime numbers below 2000000

#include <iostream>
using namespace std;

unsigned long int compute(int limit)
{
    unsigned long int sum = 0;

    int Array[limit];

    for (int i = 0; i < limit; ++i) Array[i] = i + 1;

    Array[0] = 0;

    // Eratosthenes' Sieve
    for (int i = 1; i < limit; ++i) {
        if (Array[i] != 0) {
            for (int j = 2*Array[i]; j <= limit; j += Array[i])
                Array[j-1] = 0;
        }
    }

    // Summing all the prime numbers
    for (int i = 0; i < limit; ++i) sum += Array[i];

    return sum;
}

int main()
{
    int limit = 2000000;
    cout << "The sum of all prime numbers below 2000000." << endl;
    cout << compute(limit) << endl;

    cout <<  "\nGive the new integer as limit." << endl;
    int new_limit; cin >> new_limit;

    cout << "The sum of prime numbers below " << new_limit << " is: ";
    cout << compute(new_limit) << endl;

    return 0;
}
