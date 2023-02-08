// Project Euler
// Problem 10: The sum of all prime numbers below 2000000

import primeGenerator from "../lib/eratosthenesSieve";

export function compute010(limit: number): number {
    let sum: number = 0;
    // -1 because it asks all the sum 'below' limit, and the primeGenerator
    // generate prime from 2 to the limit (included)
    let num: number[] = primeGenerator(limit - 1);

    const len = num.length;
    for (let i = 0; i < len; i++) {
        sum += num[i];
    }

    return sum;
}

function run010(): void {
    const limit: number = 2_000_000;
    console.log(compute010(limit).toString());
}

// run010();
