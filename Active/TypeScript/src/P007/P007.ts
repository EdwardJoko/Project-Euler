// Project Euler
// Problem 7: The 10001st prime number

import isPrime from "../lib/isPrime";

export function compute007(nth: number): number {
    let primeTh: number = 0;
    let i = 1

    for (; primeTh !== nth; i++) {
        if (isPrime(i)) {
            primeTh += 1;
        }
    }

    // minus 1 because, i is getting added before the for loop stop
    return (i - 1);
}

function run007(): void {
    const nth: number = 10001;
    console.log(compute007(nth).toString());
}

run007();
