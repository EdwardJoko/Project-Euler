// Project Euler
// Problem 3: The largest prime factor of 600851475143

public class P003 implements Solution<Long> {
    public static void main(String[] args) {
        long limit = 600_851_475_143L;
        System.out.println(new P003().compute(limit));
    }

    // we divide the number with every factor it has from 2,
    // then it will leave two biggest factors that the number has
    public String compute(Long limit) {
        long i = 2L;
        long factor = i;

        while (i * i <= limit) {
            if (limit % i != 0) {
                i += 1;
                continue;
            }
            
            while (limit % i == 0)
                limit /= i;

            factor = i;
        }

        return factor > limit ?
            Long.toString(factor) : Long.toString(limit);
    }
}
