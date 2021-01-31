// Project Euler
// Problem 12: The first triangle number that has 500 divisors

import java.util.*;

public class P012 {
    public static void main(String[] args) {
        int divisors = 500;

        System.out.println(compute(divisors));
    }
    
    public static String compute(int divisors) {
        int factor = 0;
        List<Integer> factors = new ArrayList<Integer>();
        List<Integer> prime_list = new ArrayList<Integer>();
        
        prime_list = prime_generator(divisors*25);
        
        long num_th = 0L;
        long num_th_plus_one = 0L;
        long triangle_number = 0L;
        long increment = 1L;

        while (factor < divisors) {
            factor = 1;
            factors.clear();
            increment += 1;
            num_th = increment;

            if (num_th % 2 == 0) {
                num_th_plus_one = num_th + 1;
                num_th /= 2;
            } else {
                num_th_plus_one = (num_th + 1) /2;
            }

            triangle_number = num_th * num_th_plus_one;
            
            // counting the factor
            int index = 0, list_index = 0;
            while (num_th != 1) {
                if (num_th % prime_list.get(index) == 0)
                    factors.add(1);
                while (num_th % prime_list.get(index) == 0) {
                    list_index = factors.size() - 1;
                    factors.set(list_index, (factors.get(list_index) + 1));
                    num_th /= prime_list.get(index);
                }
                index += 1;
            }
            
            for (int i = 0; i < factors.size(); ++i)
                factor *= factors.get(i);

            factors.clear();
            index = 0;

            while (num_th_plus_one != 1) {
                if (num_th_plus_one % prime_list.get(index) == 0)
                    factors.add(1);
                while (num_th_plus_one % prime_list.get(index) == 0) {
                    list_index = factors.size() - 1;
                    factors.set(list_index, (factors.get(list_index) + 1));
                    num_th_plus_one /= prime_list.get(index);
                }
                index += 1;
            }
            
            for (int i = 0; i < factors.size(); ++i)
                factor *= factors.get(i);
        }
        
        return Long.toString(triangle_number);
    }

    public static List<Integer> prime_generator(int limit) {
        int[] array = new int[limit];
        List<Integer> prime_numbers = new ArrayList<Integer>();

        // filling the array
        array[0] = 0;
        for (int i = 1; i < limit; i++)
            array[i] = i + 1;

        // Eratosthenes' sieve
        for (int i = 1; i < limit; i++) {
            if (array[i] != 0) {
                for (int j = 2*array[i]; j <= limit; j += array[i])
                    array[j - 1] = 0;
            }
        }

        for (int i = 0; i < limit; i++) {
            if (array[i] != 0)
                prime_numbers.add(array[i]);
        }

        return prime_numbers;
    }
}
