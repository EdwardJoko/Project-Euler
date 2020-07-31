// Project Euler
// Problem 14: Integer that produces longest Collatz sequence
//             chain below 1000000.

#include <iostream>
using namespace std;

int compute(int limit)
{
    unsigned int chain, j;
    unsigned int num = 1;
    int longest_chain = 0;
    int Array[limit];

    for (unsigned int i = num; i < limit; ++i) {
        j = i;  // i keep as index, j as the iterator of Collatz sequence
        chain = 1;  // reset the number of chain

        // Collatz sequence counter
        while (j != 1) {
            if (j < i) {    // Memoization
                chain += Array[j-1];
                break;
            } 
            else if (j % 2 == 0) j /= 2;
            else j = 3*j + 1;

            chain += 1;
        }
 
        // Memoization
        Array[i-1] = chain; // because we store chain of i=1 at index = 0, and so on

        // storing things
        if (chain > longest_chain) {
            longest_chain = chain;
            num = i;
        }
    }

     return num;
 }

 int main()
 {
     // time_t start = time(0);

     int limit = 1000000;
     cout << "Integer that produces longest Collatz sequence\n"
          << "chain under 1000000." << endl;
     cout << compute(limit) << endl;

     // double seconds_passed = difftime(time(0), start);
     // cout << seconds_passed << "seconds" << endl;

     cout << "Input another integer other than 1000000." << endl;
     cin >> limit;
     cout << compute(limit) << endl;

     return 0;
}

