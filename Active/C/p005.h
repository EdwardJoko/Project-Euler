// Project Euler
// Problem 5: Smallest positive number that is evenly divisible
//            by all of the numbers from 1 to 20

unsigned long int compute005(int limit) {
    // init the array
    int array[limit];
    for (int i = 0; i < limit; i++) array[i] = i + 1;

    // Eliminate elements that contained by bigger number, e.g. 2 is eliminated
    // because it's contained by 4(= 2 * 2), the same with 4 because of 8
    for (int i = 0; i < limit; i++) {
        for (int j = i + 1; j < limit; j++)
            if (array[j] % array[i] == 0) {
                array[i] = 0;
                break;
            }
    }

    unsigned long int num = 1;

    // Multiplying non-zero numbers in the array
    for (int i = 0; i < limit; i++) {
        if (array[i] != 0) num *= array[i];
    }

    // Brute force. Remove all the extra unnecessary factors
    for (int divider = 2; divider <= limit; divider++) {
        // the loop is because in case num is divisible by divider multiple times
        while (num % divider == 0) {
            unsigned long int num_test = num / divider;
            int identifier = 0;
            for (int j = 2; j <= limit; j++) {
                if (num_test % j == 0) {
                    identifier += 1;
                }
                else break;
            }

            if (identifier == (limit-1))
                num = num_test;
            else break;
        }
    }

    return num;
}
