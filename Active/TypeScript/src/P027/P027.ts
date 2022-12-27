// Project Euler
// With the form of n^2 + an + b, where |a| < 1000 and |b| <= 1000
// Find the product of the coefficients, a and b, for the quadratic
// expression above that produces the maximum number of primes for
// consecutive values of n, starting with n = 0.

import primeGenerator from "../lib/eratosthenesSieve";
import isPrime from "../lib/isPrime";

interface AnswerInterface {
    a: number;
    b: number;
}

export function compute027(limit: number): number {
    // with the form of n^2 + an + b, and n should start from 0,
    // then b should be a prime and also positive
    const candidateB: number[] = primeGenerator(limit);
    const bLength = candidateB.length;

    let biggestN = 0;
    let answer: AnswerInterface = { a: 0, b: 0 };
    for(let i = 0; i < bLength; i++) {
        // iterate over all possibilities of a
        for (let j = 1-limit; j < limit; j++) {
            let n = 1;
            let product = (n * n) + (n * j) + candidateB[i];

            while(isPrime(product)) {
                n += 1;
                product = (n * n) + (n * j) + candidateB[i];
            }

            if (n > biggestN) {
                biggestN = n;
                answer.a = j;
                answer.b = candidateB[i];
            }
        }
    }

    return answer.a * answer.b;
}

function run027(): void {
    const limit: number = 1000;
    console.log(compute027(limit).toString());
}

// run027();
