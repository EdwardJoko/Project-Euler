#include "tester.h"
#include "lib.h"

int main(int argc, char *argv[]) {
    test("is palindrome", is_palindrome( 10001 ), 1);
    test("is palindrome", is_palindrome( 12311 ), 0);

    test("is prime", is_prime( 1 ), 0);
    test("is prime", is_prime( 2 ), 1);
    test("is prime", is_prime( 3 ), 1);
    test("is prime", is_prime( 77 ), 0);
    test("is prime", is_prime( 97 ), 1);

    test("max num generator", max_num_generator( 1 ), 9);
    test("max num generator", max_num_generator( 2 ), 99);
    test("max num generator", max_num_generator( 3 ), 999);
    test("max num generator", max_num_generator( 4 ), 9999);

    test("min num generator", min_num_generator( 1 ), 1);
    test("min num generator", min_num_generator( 2 ), 10);
    test("min num generator", min_num_generator( 3 ), 100);
    test("min num generator", min_num_generator( 4 ), 1000);

    return 0;
}
