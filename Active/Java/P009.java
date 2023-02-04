// Project Euler
// Problem 9: a, b, c, are a Pythagorean triplet. If a + b + c = 100
//            Find the product of abc

public class P009 implements Solution<Integer> {
    public static void main(String[] args) {
        int number = 1000;
        System.out.println(new P009().compute(number));
    }

    public String compute(Integer number) {
        // minus 2 because b, c first value are at least 1
        for (int a = (number - 2); a > 1; a--) {
            for (int b = 1; b <= (number - a)/2; b++) {
                int c = number - a - b;

                if ((a*a) == (b*b) + (c*c))
                    return Integer.toString(a*b*c);
            }
        }

        return "Not solution exist.";
    }
}
