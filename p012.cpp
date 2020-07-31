// Project Euler
// Problem 12: The first triangle number that have 500 divisors

#include <iostream>
#include <time.h>
using namespace std;

// still a brute force. the solution takes about 50 mins
unsigned long int compute(int divisors)
{
    int factor = 0;
    unsigned long int num = 0;
    unsigned long int iterate = 1;  // iterator

    while (factor <= divisors) {
        factor = 0;
        num += iterate;
        for (unsigned long int i = 1; i <= num; ++i) {
            if (num % i == 0) factor += 1;
        }
        /*
        cout << "num: " << num << endl;
        cout << "factor: " << factor << endl;
        */
        iterate += 1;
    }

    return num;
}

int main()
{
    time_t start = time(0);

    cout << "The first triangle number that have 500 divisors." << endl;
    cout << compute(500) << endl;

    double seconds_passed = difftime(time(0), start);

    cout << seconds_passed << "seconds" << endl;

    cout << "\nThe least amount of divisors that you want a triangle number to have." << endl;
    int new_divisors; cin >> new_divisors;

    cout << "The triangle number: " << compute(new_divisors) << endl;

    return 0;
}
