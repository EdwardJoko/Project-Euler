// Project Euler
// Problem 16: The sum of the digits of the number 2 powered by 1000

import java.math.BigInteger;

public class P016 {
    public static void main(String[] args) {
        int power = 1000;

        power = 990;
        while (power <= 1000) {
            int answ1 = compute(power);
            int answ2 = alternate_compute(power);
            System.out.println("method 1: " + answ1);
            System.out.println("method 2: " + answ2);
            power += 1;

            if (answ1 != answ2)
                System.out.println("\n\nWRONG ANSWER!!!!\n\n");
        }
    }

    public static int compute(int limit) {
        BigInteger one = new BigInteger("1");
        String temp = one.shiftLeft(limit).toString();

        int i = 0;
        int sum = 0;
        while (i < temp.length()) {
            sum += temp.charAt(i) - '0';
            i += 1;
        }

        return sum;
    }

    // in case I don't know about Big Integer
    // I list all the result in an array but in reverse
    public static int alternate_compute(int limit) {
        int sum = 0;
        int[] array = new int[limit + 1];
        int[] identifier = new int[limit + 1];

        array[0] = 1;
        int non_zero = 1; // non-zero in the array
        int more_than_ten = 0; // more than 10 in the array

        for (int i = 0; i < limit; i++) {
            for (int k = 0; k < limit; k++) {
                if (array[k] >= 10) more_than_ten += 1;
            }

            // multiply all the numbers in array by 2
            if (more_than_ten == 0) {
                for (int j = 0; j < non_zero; j++) {
                    array[j] *= 2;
                    if (array[j] >= 10) {
                        while (array[j] >= 10) {
                            array[j] -= 10;
                            identifier[j + 1] += 1;
                        }
                        if (j == non_zero - 1)
                            non_zero += 1;
                    }
                }
            }
            // in case there is any number that is more than 10 in
            // the array we substract it by 10, n times until it
            // less than 10, then we add n to the next element of 
            // the array.
            // So we will have an array of numbers that is the e-
            // lements are forming the result of 2 powered by the
            // limit
            else {
                for (int z = 0; z < array.length; z++) {
                    while (array[z] >= 10) {
                        array[z] -= 10;
                        identifier[z + 1] += 1;
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
        for (int i = array.length - 1; array[i] == 0; i--)
            len += 1;

        int[] new_array = new int[array.length - len];

        for (int i = 0; i < new_array.length; i++)
            new_array[i] = array[i];
                
        for (int i = 0; i < new_array.length; i++) {
            sum += new_array[i];
            // System.out.print(new_array[new_array.length - 1 - i]);
        }
        System.out.println("");

        return sum;
    }
}
