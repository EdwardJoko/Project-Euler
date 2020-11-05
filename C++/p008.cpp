// Project Euler
// Problem 8: Biggest product of 13 adjacent digits int the series

#include <iostream>
#include <string>
using namespace std;

unsigned long int compute(string series, int adjacent)
{
    unsigned long int biggest_product = 0;
    unsigned long int product = 1;

    unsigned int size = series.length();

    // declaring and filling the array
    int Array[size]; char a;
    for (int i = 0; i < size; ++i) {
        a = series[i];
        Array[i] = int(a) - 48;
    }

    // (Not so) Brute force
    int index;
    for (int i = 0; i < (size - adjacent + 1); ++i) {
        // no need to iterate the adjacent if the first number is 0
        if (Array[i] == 0) continue;

        for (int j = 0; j < adjacent; ++j) {
            index = i + j;
            product *= Array[index];
        }
        
        if (product > biggest_product) biggest_product = product;

        product = 1;
    }

    return biggest_product;
}

int main()
{
    string series = "7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450";
    int adjacent = 13;

    cout << "The biggest product of the series is." << endl;
    cout << compute(series, adjacent) << endl;

    cout << "\nInput the new series of integers." << endl;
    string new_series; cin >> new_series;
    cout << "Input the new adjacent digit.\t";
    int new_adjacent; cin >> new_adjacent;

    cout << "The biggest product in the series is." << endl;
    cout << compute(new_series, new_adjacent) << endl;

    return 0;
}
