// Project Euler
// Problem 1: The sum of multiple of 3 or 5 below 1000

public class P001 implements Solution<Integer> {
    public static void main(String[] args) {
        int limit = 1000;
        System.out.println(new P001().compute(limit));
    }

    public String compute(Integer limit) {
        int num = 1;
        int sum = 0;

        while (num < limit) {
            if (num % 3 == 0 || num % 5 == 0)
                sum += num;

            num += 1;
        }
        
        return Integer.toString(sum);
    }
}
