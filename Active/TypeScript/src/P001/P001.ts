// Project Euler                                      
// Problem 1: The sum of multiple of 3 or 5 below 1000

export function compute001(limit: number): number {
    let sum: number = 0;

    for (let i = 0; i < limit; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    return sum;
}

function run001(): void {
    const limit: number = 1000;
    console.log(compute001(limit).toString());
}

// run001();
