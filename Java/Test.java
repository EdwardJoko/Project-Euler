import java.util.*;

public class Test {
    public static void main(String[] args) {
        List<Integer> factors = new ArrayList<Integer>();
        factors.add(1);
        factors.add(2);
        factors.add(3);

        System.out.println(factors);
        System.out.println(factors.size());
        System.out.println(factors.get(0));

        factors.set(factors.size() - 1,
                factors.get(factors.size() - 1) + 1);
        System.out.println(factors);
    }
}
