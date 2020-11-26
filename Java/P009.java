// Project Euler
// Problem 9: a, b, c, are a Pythagorean triplet. If a + b + c = 100
//            Find the product of abc

public class P009 {
    public static void main(String[] args) {
        System.out.println(compute());
    }

    public static String compute() {
        int a = 1, b = 1, c = 1;

        for (a = 998; a > 1; a--) {
            for (b = 1; b <= (1000-a)/2; b++) {
                c = 1000 - a - b;

                if ((a*a) == ((b*b) + (c*c)))
                    return Integer.toString(a*b*c);
            }
        }
        return Integer.toString(a*b*c);
    }
}
