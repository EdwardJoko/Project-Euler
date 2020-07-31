// Project Euler
// Problem 1: The sum of multiple of 3 or 5 below 1000

#include <iostream>
using namespace std;

int compute(int num)
{
    int sum = 0;
    int i = 1;

    while (i < num) {
        if (i % 3 == 0 || i % 5 == 0) sum += i;

        i += 1;
    }

    return sum;
}

int main()
{
    int limit = 1000;
    cout << "The sum of multiple of 3 or 5 below 1000." << endl;
    cout << compute(1000) << endl;

    cout << "\nInput the new integer limit other than 1000:\t";
    unsigned long int new_limit; cin >> new_limit;
    cout << compute(new_limit) << endl;

    return 0;
}
