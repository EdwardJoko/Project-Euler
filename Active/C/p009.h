// Project Euler
// Problem 9: a, b, c, are a Pythagorean triplet. If a + b + c = 1000
//            Find the product of abc

unsigned long int compute009(int num) {
    // minus 2 because b, c first value is at least 1
    for (int a = (num - 2); a > 1; a--) {
        for (int b = 1; b <= (num - a)/2; b++) {
            int c = num - a - b;

            if ((a*a) == (b*b) + (c*c))
                return a * b * c;
        }
    }

    return -1;
}
