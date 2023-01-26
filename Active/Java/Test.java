import java.util.Arrays;

public class Test {
    public static void main(String[] args) {
        Lib lib = new Lib();

        System.out.println(Arrays.toString(lib.eratosthenes_sieve(2)));
        System.out.println(Arrays.toString(lib.eratosthenes_sieve(3)));
        System.out.println(Arrays.toString(lib.eratosthenes_sieve(5)));
        System.out.println(Arrays.toString(lib.eratosthenes_sieve(7)));
        System.out.println(Arrays.toString(lib.eratosthenes_sieve(9)));
        System.out.println(Arrays.toString(lib.eratosthenes_sieve(11)));
        System.out.println(Arrays.toString(lib.eratosthenes_sieve(13)));
        System.out.println(Arrays.toString(lib.eratosthenes_sieve(15)));
    }
}
