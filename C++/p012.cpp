// Project Euler
// Problem 12: The first triangle number that has 500 divisors

#include <iostream>
#include <vector>
#include <time.h>
using namespace std;

vector<unsigned int> prime_generator(int limit)
{
    int Array[limit];

    // filling the array
    Array[0] = 0;
    for (int i = 1; i < limit; ++i) Array[i] = i + 1;

    // Eratosthenes' Sieve
    for (int i = 1; i < limit; ++i) {
        if (Array[i] != 0) {
            for (int j = 2*Array[i]; j <= limit; j += Array[i])
                Array[j - 1] = 0;
        }
    }

    static vector<unsigned int> primes;
    primes.clear();

    // input the primes to the vector
    for (int i = 0; i < limit; ++i) {
        if (Array[i] != 0)
            primes.push_back(Array[i]);
    }

    return primes;
}


unsigned long int compute(int divisors)
{
    int factor = 0;
    vector<int> factors;
    vector<unsigned int> primes_list = prime_generator(25 * divisors); // assuming that primes below 25 * divisors would be enough

    // Triangle number generator and factor counter
    unsigned long int num_th = 0;
    unsigned long int num_th_plus_one = 0;
    unsigned long int triangle_number = 0;
    unsigned long int iterate = 1;

    while (factor < divisors) {
        factor = 1;
        factors.clear();
        iterate += 1;
        num_th = iterate;

        if (num_th % 2 == 0) {
            num_th_plus_one = num_th + 1;
            num_th /= 2;
        } else {
            num_th_plus_one = (num_th + 1) / 2;
        }

        triangle_number = num_th * num_th_plus_one;

        /*
        cout << "1: " << num_th << endl;
        cout << "2: " << num_th_plus_one << endl;
        cout << "3: " << triangle_number << endl;
        */

        // counting the factor
        int index = 0;
        while (num_th != 1) {
            if (num_th % primes_list[index] == 0)
                factors.push_back(1);
            while (num_th % primes_list[index] == 0) {
                factors[factors.size() - 1] += 1;
                num_th /= primes_list[index];
            }
            index += 1;
        }

        for (int i = 0; i < factors.size(); ++i) factor *= factors[i];

        factors.clear();
        index = 0;

        while (num_th_plus_one != 1) {
            if (num_th_plus_one % primes_list[index] == 0)
                factors.push_back(1);
            while (num_th_plus_one % primes_list[index] == 0) {
                factors[factors.size() - 1] += 1;
                num_th_plus_one /= primes_list[index];
            }
            index += 1;
        }

        for (int i = 0; i < factors.size(); ++i) factor *= factors[i];

        // cout << "factor: " << factor << endl;
    }

    return triangle_number;
}

int main()
{
    time_t start = time(0);

    cout << "The first triangle number that have 500 divisors."
         << endl;
    cout << compute(500) << endl;

    double seconds_passed = difftime(time(0), start);
    cout << seconds_passed << "seconds" << endl;

    cout << "\nThe least amount of divisors that you want a "
         << "triangle number to have." << endl;
    int new_divisors; cin >> new_divisors;

    cout << "The triangle number: " << compute(new_divisors)
         << endl;

    return 0;
}
