// Project Euler
// Problem 7: The 10001st prime nubmer

// I think it would be better if I use vector rather than array
// but at the time I don't understand about vector yet

#include <iostream>
using namespace std;

int Eratosthenes_Sieve(int limit, unsigned long int size)
{
    int Array[size];

    Array[0] = 0;   // it should be 1 but we assign it 0 in the first place
    for (int i = 1; i < size; ++i) Array[i] = i + 1; // filling the array

    // The sieve
    for (int i = 1; i < size; ++i) {
        if (Array[i] != 0) {
            for (int j = 2*Array[i]; j <= size; j += Array[i])
                Array[j - 1] = 0;
        }
    }

    // To check if n-th(limit-th) prime is on our limit. If not we multiply
    // the size of our array by 10. line 46 and 54
    int prime_th = 0;
    int index;
    for (index = 0; index < size; index++) {
        if (Array[index] != 0) prime_th += 1;
        if (prime_th == limit) break;
    }

    if (prime_th == limit) {
        cout << Array[index] << endl;
        return 1;
    }
    else return 0;  // there no n-th prime that we looking for
                    // in the range of size
}

int main()
{
    int limit = 10001;
    unsigned long int size = limit * 10;    // assuming the limit-th prime within the range of limit*10
    cout << "The 10001st prime number." << endl;

    while (!Eratosthenes_Sieve(limit, size)) {
        size *= 10;   // assuming the limit-th prime will be in the range of limit*10
    }

    cout << "Input another limit other than 10001.\n";
    cin >> limit;
    size = limit * 10;

    while (!Eratosthenes_Sieve(limit, size)) {
        size *= 10;   // assuming the limit-th prime will be in the range of limit*10
    }

    return 0;
}
