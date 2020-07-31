// Project Euler
// Problem 2: The sum of even Fibonacci number under 4000000

#include <iostream>
using namespace std;

int compute(int limit)
{
    int x = 0;  // first number of Fibonacci
    int y = 1;  // second number of Fibonacci
    int sum = 0;
    int temp = 0;   // temporary variable to store value

    while (y < limit) {
        if (y % 2 == 0) sum += y;

        temp = x;
        x = y;
        y = x + temp;
    }

    return sum;
}

int main()
{
    int limit = 4000000;
    cout << "The sum of even Fibonacci number under 4000000." << endl;
    cout << compute(limit) << endl;

    cout << "Input another integer for the new limit other than 4000000.\n";
    cin >> limit;
    cout << compute(limit) << endl;

    return 0;
}
