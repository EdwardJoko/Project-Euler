// Project Euler
// Problem 17: How many characters  would be used if all the num-
//             bers from 1 to 1000 (one thousand) inclusive were
//             written out in words

public class P017_Test {
    public static void main(String[] args) {
        int limit = 1000;

        System.out.println(compute(limit));
    }

    public static String compute(int limit) {
        int num_of_chars = 0;

        for (int i = 1; i <= limit; i++) {
            int num = i;
            int index = 0;

            if (num >= 1000) {
                index = num / 1000;
                num_of_chars += CHARS_PER_THOUSANDS[index - 1];
                num -= 1000 * index;
            }
            if (num >= 100 && num != 0) {
                index = num / 100;
                num_of_chars += CHARS_PER_HUNDREDS[index - 1];
                if (num % 100 != 0) {
                    num_of_chars += 3; // for the "and"
                }
                num -= 100 * index;
            }
            if (num >= 10 && num != 0) {
                index = num / 10;
                // to handle the teens like eleven, twelve, etc
                if (index == 1 && num != 10) {
                    num -= 10;
                    num_of_chars += CHARS_PER_TEENS[num - 1];
                    continue;
                }
                else {
                    num_of_chars += CHARS_PER_TENS[index - 1];
                    num -= 10 * index;
                }
            }
            if (num >= 1 && num != 0) {
                index = num;
                num_of_chars += CHARS_PER_NUM[index - 1];
                num = 0;
            }
        }

        return Integer.toString(num_of_chars);
    }

    public static int[] CHARS_PER_NUM = {3, 3, 5, 4, 4, 3, 5, 5, 4};
    public static int[] CHARS_PER_TEENS = {6, 6, 8, 8, 7, 7, 9, 8, 8}; // eleven, twelve, etc
    public static int[] CHARS_PER_TENS = {3, 6, 6, 5, 5, 5, 7, 6, 6};
    public static int[] CHARS_PER_HUNDREDS = {10, 10, 12, 11, 11, 10, 12, 12, 11};
    public static int[] CHARS_PER_THOUSANDS = {11, 11, 13, 12, 12, 11, 13, 13, 12};
}

// It's possible to make it more dynamic rather than write to many
// ifs but I don't have time at the moment
