// Project Euler
// Problem 7: The 10001st prime number

public class P007 implements Solution<Integer> {
    public static void main(String[] args) {
        int n_th = 10001;
        System.out.println(new P007().compute(n_th));
    }

    public String compute(Integer n_th) {
        Lib lib = new Lib();

        int prime_th = 0;
        int i = 0;

        for (; prime_th != n_th; i++) {
            if (lib.is_prime(i)) {
                prime_th += 1;
            }
        }

        // minus 1 because, i is getting added before the for loop stop
        return Integer.toString(i - 1);
    }
}
