// Project Euler
// Problem 1: The sum of multiple of 3 or 5 below 1000

#include <iostream>
using namespace std;

int compute(int num)
{
    int sum = 0;

    for (int i = 1; i < num; ++i)
        if (i % 3 == 0 || i % 5 == 0)
            sum += i;

    return sum;
}

int main()
{
    int limit = 1000;
    cout << "The sum of multiple of 3 or 5 below 1000." << endl;
    cout << compute(1000) << endl;

    cout << "\nInput the new integer limit other than 1000.\n";
    cin >> limit;
    cout << compute(limit) << endl;

    return 0;
}
