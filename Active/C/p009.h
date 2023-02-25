// Project Euler
// Problem 9: a, b, c, are a Pythagorean triplet. If a + b + c = 100
//            Find the product of abc

unsigned long int compute009(int number) {
    // minus 2 because b, c first value are at least 1
    for (int a = (number - 2); a > 1; a--) {
        for (int b = 1; b <= (number - a)/2; b++) {
            int c = number - a - b;

            if ((a*a) == (b*b) + (c*c))
                return a * b * c;
        }
    }

    return -1;
}
