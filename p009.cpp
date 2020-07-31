// Project Euler
// Problem 9: a, b, c are a Pythagorean triplet. If a + b + c = 1000
//            Find the product of abc.

#include <iostream>
using namespace std;

int compute()
{
    int a, b, c;
    for (a = 998; a > 1; --a) {
        for (b = 1; b <= (1000-a)/2; ++b) {
            c = 1000 - a - b;

            if ((a*a) == ((b*b)+(c*c))) break;
        }
        if ((a*a) == ((b*b)+(c*c))) break;
    }

    /*
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
    */

    return a*b*c;
}

int main()
{
    cout << "The product of abc is." << endl;
    cout << compute() << endl;

    cout << "\nThere is no general case in this problem." << endl;

    return 0;
}
