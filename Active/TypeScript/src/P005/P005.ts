// Project Euler
// Problem 5: The smallest positive number thas is evenly divisible by
//            all of the numbers from 1 to 20

export function compute005(limit: number): number {
    const array: number[] = [];

    for (let i = 0; i < limit; i++) {
        array.push(i + 1);
    }

    // Eliminate factors that have multipliers above itself and within the limit
    for (let i = 0; i < limit; i++) {
        for (let j = i + 1; j < limit; j++)
            if (array[j] % array[i] == 0) {
                array[i] = 0;
                break;
            }
    }

    let num = 1;

    // Multiplying non-zero numbers in the array
    for (let i = 0; i < limit; i++) {
        if (array[i] != 0) num *= array[i];
    }

    // Brute force. Remove all the extra unnecessary factors
    for (let i = 2; i <= limit; i++) {
        // the loop is because in case num is divisible by i multiple times
        while (num % i == 0) {
            let identifier: number = 0;
            let num_test: number = num / i;
            let j: number = 2;

            while (j <= limit) {
                if (num_test % j == 0) {
                    identifier += 1;
                    j += 1;
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

function run005(): void {
    const limit: number = 20;
    console.log(compute005(limit).toString());
}

// run005();
