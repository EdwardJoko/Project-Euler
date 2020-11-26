// Project Euler
// Problem 16: The sum of the digits of the number 2 powered by 1000

import java.math.BigInteger;

public class P016 {
    public static void main(String[] args) {
        int power = 1000;
        System.out.println(compute(power));
        System.out.println(alternate_compute(power));
    }

    public static String compute(int limit) {
        BigInteger one = new BigInteger("1");
        String temp = one.shiftLeft(1000).toString();

        int i = 0;
        int sum = 0;
        while (i < temp.length()) {
            sum += temp.charAt(i) - '0';
            i += 1;
        }

        return Integer.toString(sum);
    }

    // in case I don't know about Big Integer
    // I list all the result in an array but in reverse
    public static int alternate_compute(int limit) {
        int sum = 0;
        int[] array = new int[limit];
        int[] identifier = new int[limit];

        array[0] = 1;
        int non_zero = 1; // non-zero in the array
        int more_than_ten = 0; // more than 10 in the array

        for (int i = 0; i < limit; i++) {
            for (int k = 0; k < limit; k++) {
                if (array[k] >= 10) more_than_ten += 1;
            }

            if (more_than_ten == 0) {
                for (int j = 0; j < non_zero; j++) {
                    array[j] *= 2;
                    if (array[j] >= 10) {
                        while (array[j] >= 10) {
                            array[j] -= 10;
                            identifier[j + 1] = 1;
                        }
                        if (j == non_zero -1)
                            non_zero += 1;
                    }
                }
            } else {
                for (int z = 0; z < array.length; z++) {
                    while (array[z] >= 10) {
                        array[z] -= 10;
                        identifier[z + 1] = 1;
                    }
                }
                more_than_ten = 0;
                i -= 1;
            }

            for (int j = 0; j < identifier.length; j++) {
                array[j] += identifier[j];
                identifier[j] = 0;
            }
        }

        // printing the power result
        int len = 0;
        for (int i = array.length - 1; array[i] == 0; i--) {
            len += 1;
        }

        int[] new_array = new int[array.length - len];

        for (int i = 0; i < new_array.length; i++) {
            new_array[i] = array[i];
        }
                
        for (int i = 0; i < new_array.length; i++) {
            sum += new_array[i];
            System.out.print(new_array[new_array.length - 1 - i]);
        }
        System.out.println("");

        return sum;
    }
}
