// Project Euler
// Problem 4: The largest palindrom made from the product of
//            3 digit numbers

import java.lang.Math;

public class P004 {
    public static void main(String[] args) {
        int digit = 3;
        long[] answer = palindrome_generator(digit);

        for (int i = 0; i < 3; i++)
            System.out.println(answer[i]);

        digit = 2;
        answer = palindrome_generator(digit);

        for (int i = 0; i < 3; i++)
            System.out.println(answer[i]);
    }

    public static long[] palindrome_generator(int digit) {
        long[] answer = {0, 0, 0};
        long num_factor = 0;

        for (int i = 0; i < digit; i++) {
            num_factor += 9 * Math.pow(10, i);
        }

        long num = num_factor * num_factor;
        long first_divider = num_factor;
        long last_divider = (long) Math.pow(10, digit-1);
        long bottom_limit = last_divider * last_divider;

        while (num >= bottom_limit) {
            if (palindrome_checker(num)) {
                for (long i = first_divider; i >= last_divider; i--) {
                    if (num % i == 0) {
                        answer[0] = num;
                        answer[1] = i;
                        answer[2] = num / i;
                        break;
                    }
                }
            }

            // double checking
            if (answer[2] < first_divider && answer[2] > last_divider)
                break;
            num -= 1;
        }
        
        return answer;
    }

    public static boolean palindrome_checker(long num) {
        String num_str = Long.toString(num);
        int length = num_str.length();

        int i = 0;
        while (i < length/2) {
            if (num_str.charAt(i) != num_str.charAt(length-1-i))
                return false;
            i += 1;
        }

        return true;
    }
}
