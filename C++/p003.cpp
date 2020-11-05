// Project Euler
// Problem 3: The largest prime factor of 600851475143

#include <iostream>
using namespace std;

// We divide the 'num' with all the numbers from 2. So basically
// the 'num' will be divided by all the prime number. Because we
// only increase the divider in case if the 'num' is not divisible
// anymore with the divider. So at one point the only factors that
// left just the biggest two factors of the 'num'
unsigned long int compute(unsigned long long int num)
{
    unsigned long int i = 2;
    auto factor = i;

    while (factor * factor <= num) {    // because if factor^2 is bigger than num. then factor*(factor+1) will also be bigger
        if (num % i != 0) {
            i += 1;
            continue;
        }
        while (num % i == 0) {
            num /= i;
        }
        factor = i;
    }

    if (factor > num) return factor;
    else return num;
}

int main()
{
    cout << "The largest prime factor of 600851475143." << endl;
    unsigned long long int num = 600851475143;
    cout << compute(num) << endl;

    cout << "Give the integer that you want to know the largest\n"
         << "prime factor of it.\n";
    cin >> num;
    cout << compute(num) << endl;

    return 0;
}
