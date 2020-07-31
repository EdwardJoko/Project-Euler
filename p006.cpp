// Project Euler
// Problem 6: The difference between the sum of the squares of the 
//            first one hundred natural numbers and the square of
//            the sum

#include <iostream>
using namespace std;

int compute(int num)
{
    int sum_of_squares = (num * (num+1) * (2*num+1)) / 6;
    int square_of_sum  = ((num * (num+1)) / 2) * ((num * (num+1)) / 2);

    return square_of_sum - sum_of_squares;
}

int main()
{
    int limit = 100;
    cout << "The difference between the sum of the squares of the";
    cout << "first one hundred\nnatural numbers and the square of";
    cout << "the sum." << endl;
    cout << compute(limit) << endl;

    cout << "Give the new integer limit!\t";
    int new_limit; cin >> new_limit;
    cout << compute(new_limit) << endl;

    return 0;
}
